class BrowserHistory {
public:
list<string>history;
list<string>::iterator it;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        it=history.begin();//iterator pointing to the first page;
        
    }
    
    void visit(string url) {
        auto del=it;
        del++;
        history.erase(del,history.end());
        history.push_back(url);
        it++;
        
    }
    
    string back(int steps) {
        while((it!=history.begin())&&(steps--))
        {
            it--;
        }
        return *it;
        
    }
    
    string forward(int steps) {
         while((it!=prev(history.end()))&&(steps--))//history.end() last node kai aage
         //toh hum prev(history.end()) use krenge last node sksi liye

        {
            it++;
        }
        return *it;
        
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */