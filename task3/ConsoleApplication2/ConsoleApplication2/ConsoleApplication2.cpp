// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    std::string text{ "12342251234" }; 
    std::string word{ "2" };           
    int count = 0;      
    for (int i = 0; i <= text.length() - word.length(); )
    {
        // получаем индекс
        int position = text.find(word, i);
        // если не найдено ни одного вхождения с индекса i, выходим из цикла
        if (position == std::string::npos) 
            break;
        // если же вхождение найдено, увеличиваем счетчик вхождений
        ++count;
        // переходим к следующему индексу после position
        i = position + 1;
    }
    std::cout << "The word is found " << count << " times." << std::endl;
}


