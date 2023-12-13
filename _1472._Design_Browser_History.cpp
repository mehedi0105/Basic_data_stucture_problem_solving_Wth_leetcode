class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class BrowserHistory
{
public:
    Node *current;
    BrowserHistory(string homepage)
    {
        this->current = new Node(homepage);
    }

    void visit(string url)
    {
        Node *newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    string back(int steps)
    {
        while (current->prev != NULL && steps > 0)
        {
            current = current->prev;
            steps--;
        }
        return current->val;
    }

    string forward(int steps)
    {
        while (current->next != NULL && steps > 0)
        {
            current = current->next;
            steps--;
        }
        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */