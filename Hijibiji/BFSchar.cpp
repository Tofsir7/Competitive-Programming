#include <iostream>
#include <queue>
#include <vector>

// Function to search an item in the tree using BFS
int searchItemInTree(const std::vector<char>& tree, char item) {
    std::queue<int> queue;
    queue.push(0); // Start from the root node

    while (!queue.empty()) {
        int nodeIndex = queue.front();
        queue.pop();

        if (tree[nodeIndex] == item) {
            return nodeIndex;
        }

        // Calculate the indices of the node's children
        int leftChild = 2 * nodeIndex + 1;
        int rightChild = 2 * nodeIndex + 2;

        // Add the children to the queue if they exist
        if (leftChild < tree.size()) {
            queue.push(leftChild);
        }
        if (rightChild < tree.size()) {
            queue.push(rightChild);
        }
    }

    return -1; // Item not found in the tree
}

int main() {
    // Create the tree using an array
    std::vector<char> tree = {'A', 'B', 'C', 'D', 'E', 'F'};

    // Search for item 'F' in the tree
    int result = searchItemInTree(tree, 'F');

    if (result != -1) {
        std::cout << "Item found in the tree at index: " << result << std::endl;
    } else {
        std::cout << "Item not found in the tree." << std::endl;
    }

    return 0;
}
