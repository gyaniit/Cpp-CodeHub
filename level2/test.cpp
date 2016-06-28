#include <stdexcept>
#include <iostream>

class TreeNode
{
public:
    TreeNode(TreeNode* leftChild, TreeNode* rightChild)
    {
        this->leftChild = leftChild;
        this->rightChild = rightChild;
    }

    TreeNode* getLeftChild() const
    {
        return this->leftChild;
    }

    TreeNode* getRightChild() const
    {
        return this->rightChild;
    }

private:
    TreeNode* leftChild;
    TreeNode* rightChild;
};

class TreeHeight
{
public:
    static int calculateHeight(TreeNode* root)
    {
        int height = 0;
        bool moreChild = true;
        while(moreChild) {
            if(root->getLeftChild())
                root = root->getLeftChild(); // **This is where the compiler complains.**
            else if(root->getRightChild())
                root = root->getRightChild();
            else
                moreChild = false;
            ++height;
        }
        return height;
    }
};

#ifndef RunTests
int main()
{
    TreeNode* leaf1 = new TreeNode(NULL, NULL);
    TreeNode* leaf2 = new TreeNode(NULL, NULL);
    TreeNode* node = new TreeNode(leaf1, NULL);
    TreeNode* root = new TreeNode(node, leaf2);

    std::cout << TreeHeight::calculateHeight(root);
}
#endif
