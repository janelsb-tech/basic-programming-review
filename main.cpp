#include <iostream>
int main()
{
    int classnumber{2};
    std::cout << sizeof(classnumber) << std::endl;
    std::cout << typeid(classnumber).name() << std::endl;
    std::cout << static_cast<double>(classnumber) << std::endl;
    //const int doubleclassnumber(static_cast<double>(classnumber))

    int a{1};
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;

    int score{};
    std::cout << "Enter score:";
    std::cin >> score;
    if(score>=90)
        std::cout<< "A\n";
    else if (score>=80)
       std::cout<< "B\n";
    else if (score>=70)
       std::cout<< "C\n";
    else if (score>=60)
       std::cout<< "D\n";
    else 
       std::cout<< "You have to take the class again\n";
    
    int grade{};
    std::cout << "Enter grade: \n";
    std::cin >> grade;
    switch(grade)
    {
        case 1:
            std::cout << "freshman\n";
        case 2:
            std::cout << "sophomore\n";
        case 3:
            std::cout << "junior\n";
        case 4:
            std::cout << "senior\n";
    }
    //std::cout << "Enter grade: \n";
    //std::cout >> grade >> std::endl;
    //if(grade==1)
    //std::cout << "freshman" << std::endl;
    //else if(grade==2)
    //std::cout << "sophomore" << std::endl;
    //if(grade==3)
    //std::cout << "junior" << std::endl;
    //if(grade==4)
    //std::cout << "semior" << std::endl;

    int number{1};
    do
    {
        std::cout << number << std::endl;
        ++number;
    }
    while(number<10);

    return 0;
}