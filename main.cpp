#include <iostream>
#include "Trie.h"

int main(int argc, const char* argv[])
{
    struct TrieNode* root = getNewNode();
    insert(root, "able");
    insert(root, "about");
    insert(root, "abroad");
    insert(root, "absence");
    insert(root, "absolute");
    insert(root, "absurd");
    insert(root, "accent");
    insert(root, "accident");
    insert(root, "according");
    insert(root, "account");

    string input;

    while (true)
    {
        cout << "Begin to type a word then press Enter, or type 'q' for exit: ";
        cin >> input;
        if (input == "q")
        {
            break;
        }

        string props[MAX_VARIANTS];
        const int num_variants = getProposition(root, input, props);

        if (num_variants != 0)
        {
            for (size_t i = 0; i < num_variants; ++i)
                std::cout << props[i] << std::endl;
        }
    }
    return 0;
}