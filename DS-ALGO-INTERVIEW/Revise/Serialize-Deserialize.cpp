class Codec {
public:
    string serialize(TreeNode* root) {
        if(root == 0) {
            return "X";
        }
        string leftTreeSerialize = serialize(root->left);
        string rightTreeSerialize = serialize(root->right);
        
        return (to_string(root->val) +"," + leftTreeSerialize + "," + rightTreeSerialize);
    }

    TreeNode* deserialize(string data) {
        vector<string> vect;
        string str = "";
        for(int i = 0; i < data.length(); i++) {
            if(data[i] == ',') {
                vect.push_back(str);
                str = "";
                continue;
            }
            str += data[i];
        }
        queue<string> queue;
        for(string entry: vect) {
            // cout << entry << endl;
            queue.push(entry);
        }
        TreeNode* root = deserialize(queue);
        return root;
    }
    TreeNode* deserialize(queue<string>& queue) {
        if(queue.size() == 0) return nullptr;
        string str = queue.front();
        queue.pop();
        if(str == "X"){
            return nullptr;
        }
        TreeNode* root = new TreeNode(stoi(str));
        root->left = deserialize(queue);
        root->right = deserialize(queue);
        return root;
    }
};
