class Trie {
public:
    // this is not the best implementation for this kind of Data Stacture bt it works
    unordered_map<string,Trie*> childs;
    bool end;
    /** Initialize your data structure here. */
    Trie() {
        childs=unordered_map<string,Trie*>();
         end=false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* root=this;
        string str="";
        for(char c : word)
        {
            str+=c;
            if(root->childs[str]==nullptr)
            {
                root->childs[str]=new Trie();
            }
            root=root->childs[str];
        }
        root->end=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* root=this;
         string str="";
        for(char c : word)
        {
             str+=c;
            if(root->childs[str]==nullptr)
            {
                return false;
            }
            root=root->childs[str];
        }
        return root->end;
        
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* root=this;
        string str="";
        for(char c : prefix)
        {
            str+=c;
            if(root->childs[str]==nullptr)
            {
                return false;
            }
            root=root->childs[str];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */