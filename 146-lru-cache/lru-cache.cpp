

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */
class Node {
public:
    int key, val;
    Node *next, *prev;

    Node(int k, int v) {
        key = k;
        val = v;
        next = prev = nullptr;
    }
};

class LRUCache {
public:
    int capacity;
    map<int, Node*> mpp;
    Node *head, *tail;

    LRUCache(int c) {
        capacity = c;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    void deleteNode(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertAfterHead(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    int get(int key) {
        if (mpp.find(key) == mpp.end())
            return -1;

        Node* node = mpp[key];

        deleteNode(node);
        insertAfterHead(node);

        return node->val;
    }

    void put(int key, int value) {

        // key already exists
        if (mpp.find(key) != mpp.end()) {
            Node* node = mpp[key];

            node->val = value;

            deleteNode(node);
            insertAfterHead(node);

            return;
        }

        // cache full
        if (mpp.size() == capacity) {
            Node* node = tail->prev;

            mpp.erase(node->key);
            deleteNode(node);

            delete node;
        }

        Node* node = new Node(key, value);

        insertAfterHead(node);
        mpp[key] = node;
    }
};
