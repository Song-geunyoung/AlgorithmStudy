#include <iostream>
#include <map>

using namespace std;

void preOrder(map<char, pair<char, char>> binaryTree, char node)
{
    if (node == NULL)
        return;

    cout << node;
    preOrder(binaryTree, binaryTree[node].first);
    preOrder(binaryTree, binaryTree[node].second);
} // A B D C E F G

void inOrder(map<char, pair<char, char>> binaryTree, char node)
{
    if (node == NULL)
        return;

    inOrder(binaryTree, binaryTree[node].first);
    cout << node;
    inOrder(binaryTree, binaryTree[node].second);
} // D B A C E F G

void postOrder(map<char, pair<char, char>> binaryTree, char node)
{
    if (node == NULL)
        return;

    postOrder(binaryTree, binaryTree[node].first);
    postOrder(binaryTree, binaryTree[node].second);
    cout << node;
} // D B E G F C A


int main()
{
    map<char, pair<char, char>> binaryTree;
    int N;
    char node1, node2, node3;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> node1 >> node2 >> node3;

        if (node2 == '.')
            node2 = NULL;
        if (node3 == '.')
            node3 = NULL;

        binaryTree.insert({ node1, { node2, node3 } });
    }

    preOrder(binaryTree, 'A');
    cout << endl;

    inOrder(binaryTree, 'A');
    cout << endl;

    postOrder(binaryTree, 'A');
    cout << endl;

    return 0;
}
