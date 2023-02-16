#include <iostream>
#include "tree.h"
//#include "console.h"

#include <string>
int main()
{
	int workon=1;
	struct TrieNode* tree = new TrieNode;
	tree=getNewNode();;
	
	insert(tree, "cat"); // добавляем слова в словарь
	insert(tree, "card");
	insert(tree, "cosmos");
	insert(tree, "apple");
	if (search(tree, "cosmos"))
		std::cout<<"ok"<<std::endl;
	
	while (workon != 0)
	{
		cout << "напишите начало слова, нажмите enter > ";
		string text;
		cin >> text;
		simbolsearch(tree, text);
		cout<<endl;
		cout << " 0 - for exit > ";
		cin >> workon;
		
		cout<<endl;
	}

	return 0;
}
