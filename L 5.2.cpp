#include <iostream>
#include <fstream>
#include <set>

using namespace std;
/*
 Дан файл f, компоненты которого являються целыми числами.
Получить файл g, образованный из файла f исключением повторных.
*/

int main()
{
    ifstream f("f.txt");
    set<int> numbers;
    int temp;
    while (f >> temp) numbers.insert(temp);
    ofstream g("g.txt");
    for (auto number : numbers) g << number << endl;

    cout << "Open the 'g' file to see the result!" << endl;

    return 0;
}