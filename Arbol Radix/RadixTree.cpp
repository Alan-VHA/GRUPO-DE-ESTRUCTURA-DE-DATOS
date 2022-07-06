#include "Radix.hpp"
using namespace RAX;

int main() {

    RadixNode *root = new RadixNode();

    Insert("rubens", root);
    Insert("romane", root);
    Insert("romanus", root);
    Insert("romulus", root);
    Insert("ruber", root);
    Insert("rubicon", root);
    Insert("rubicundus", root);
    
    Traverse(root);
    cout << Find(root, "ruber") << endl;
}




























/*
// Include header file
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// C++ Program for
// Radix tree insert
class TreeNode
{
    public: string label;
    vector < TreeNode *> child; 
    TreeNode(){
        this->label = "";
    }
    TreeNode(string value)
    {
        this->label = value;
    }
};
class RadixTree
{
    public: TreeNode *root;
    RadixTree()
    {
        this->root = new TreeNode("");
    }
    int matchingCharacters(string word, TreeNode *node)
    {
        int matches = 0;
        int minLength = 0;
        if (node->label.length() >= word.length())
        {
            minLength = word.length();
        }
        else if (node->label.length() < word.length())
        {
            minLength = node->label.length();
        }
        if (minLength > 0)
        {
            // Count matches characters
            for (int i = 0; i < minLength; i++)
            {
                if (word[i] == node->label[i])
                {
                    // When characters are same
                    matches++;
                }
                else
                {
                    // When characters are not same
                    return matches;
                }
            }
        }
        // Return the current number of matches
        return matches;
    }
    // Add node in proper place
    void insertProcess(string word, TreeNode *node)
    {
        int matches = this->matchingCharacters(word, node);
        if ((matches == 0) || (node == this->root) || 
            ((matches > 0) && (matches < word.length()) && 
             (matches >= node->label.length())))
        {
            bool inserted = false;
            string newWordPart = word.substr(matches, word.length()-matches);
            for (int i = 0; i < node->child.size(); ++i)
            {
                if (node->child.at(i)->label[0] == newWordPart[0])
                {
                    inserted = true;
                    this->insertProcess(newWordPart, node->child.at(i));
                }
            }
            if (inserted == false)
            {
                // Add new part
                node->child.push_back(new TreeNode(newWordPart));
            }
        }
        else if (matches < word.length())
        {
            string commonRoot = word.substr(0, matches);
            string branchPreviouslabel = node->label.substr(matches, node->label.length()-matches);
            string branchNewlabel = word.substr(matches, word.length()-matches);
            node->label = commonRoot;
            TreeNode *newNodePreviouslabel = new TreeNode(branchPreviouslabel);
            // Add current node child to new node
            for (int i = 0; i < node->child.size(); ++i)
            {
                newNodePreviouslabel->child.push_back(node->child.at(i));
            }
            // Clear node element
            node->child.clear();
            // Add new node
            node->child.push_back(newNodePreviouslabel);
            // Add branch new label
            node->child.push_back(new TreeNode(branchNewlabel));
        }
        else if (matches > node->label.length())
        {
            string newLabel = 
              node->label.substr(node->label.length(), word.length());
            // Add new label
            node->child.push_back(new TreeNode(newLabel));
        }
    }
    void insert(string word)
    {
        this->insertProcess(word, this->root);
    }
    // Display the preorder of tree elements
    void printPreorder(TreeNode *node)
    {
        if (node == NULL)
        {
            return;
        }
        // Display node value
        cout << node->label << endl;
        for (int i = 0; i < node->child.size(); ++i)
        {
            // Visit child node
            this->printPreorder(node->child.at(i));
        }
    }
};
int main()
{
    RadixTree *tree = new RadixTree();
    // Add tree node
    tree->insert("romane");
    tree->insert("romanus");
    tree->insert("romulus");
    tree->insert("rubens");
    tree->insert("ruber");
    tree->insert("rubicon");
    tree->insert("rubicundus");
    /*
                r
               /  \
              /    \
             /      \
            /        \
           om        ub
          /  \      /  \
         an  ulus  e    ic
        / \       / \   / \
       e   us    ns  r on  undus
    
    */
    //cout << "Preorder Tree Data ";
    // Display Tree nodes
    //tree->printPreorder(tree->root);
    //return 0;
//}*/
