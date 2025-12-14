#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void quest_84() {
    float t;
    cout << "Введите время (мин.сек): ";
    cin >> t;
    int m = (int)t;
    int s = (t - m) * 100;
    
    // Проверка на корректность секунд
    if(s > 60 || s < 0) {
        cout << "Ошибка! Число секунд должно быть от 0 до 59\n\n";
    } 
    else {
        int ts = m*60 + s;
        cout << m << " мин " << s << " сек = " << ts << " сек\n\n";
    }
}

void quest_85() {
    int y;
    cout << "Ведите год: "; // Опечатка в тексте
    cin >> y;
    
    // Високосный год, если делится на 4, но не делится на 100, или делится на 400
    if ( (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) )
        cout << y << " год - високосный\n\n";
    else
        cout << y << " год - не високосный\n\n";
}

void quest_86() {
    float a, b, c;
    cout<<"Введите коэффициенты a b c: ";
    cin>>a>>b>>c; 
    
    if (a==0) {
        cout<<"Ошибка! 'a' не может быть равно 0\n\n";
        return;
    }
    
    float d = b*b - 4*a*c; // Без пробелов, как часто бывает
    
    if (d < 0) {
        cout << "Уравнение не имеет действительных решений\n\n";
    } 
    else {
        float x1 = (-b + sqrt(d))/(2*a);
        float x2 = (-b - sqrt(d))/(2*a);
        cout<<"Корни: x1="<<x1<<" x2="<<x2<<"\n\n";
    }
}

void quest_87() {
    float sum;
    cout << "Сумма покупки: ";
    cin >> sum;
    
    if (sum > 1000) {
        cout << "Вам предоставляется скидка 10%\n";
        sum = sum * 0.9;
    }
    cout << "Сумма с учетом скидки: " << sum << " руб\n\n";
}

void quest_88() {
    float sum;
    cout << "Сумма покупки: ";
    cin >> sum;
    
    if (sum > 1000) {
        cout << "Вам предоставляется скидка 5%\n";
        sum = sum * 0.95;
    } 
    else if (sum > 500) { // else if на той же строке
        cout << "Вам предоставляется скидка 3%\n";
        sum = sum * 0.97;
    }
    cout << "Сумма с учетом скидки: " << sum << " руб\n\n";
}

void quest_89() {
    int year;
    cout << "В каком году был основан Санкт-питербург? "; // Опечатка
    cin >> year;
    if (year == 1703) 
        cout << "Правильно\n\n"; // Без скобок {}
    else 
        cout << "Вы ошиблись, Санкт-Петербург был основан в 1703 году\n\n";
}

void quest_90() {
    int year;
    cout << "В каком году началась Вторая мировая война? ";
    cin >> year;
    
    if (year == 1939) {
        cout << "Правильно\n\n";
    } else {
        cout << "Вы ошиблись, Вторая мировая война началась в 1939 году\n\n";
    }
}

void quest_91() {
    int otv;
    cout << "Архитектор Исаакиевского собора:\n";
    cout << "1. Доменико Трезини\n2. Огюст Монферран\n3. Карл Росси\n";
    cout << "Ваш ответ: ";
    cin >> otv;
    
    if (otv == 2) {
        cout << "Правильно\n\n";
    } else {
        cout << "Вы ошиблись. Правильный ответ: Огюст Монферран\n\n";
    }
}

void quest_92() {
    int otv;
    cout << "Невский проспект получил свое название:\n";
    cout << "1. По имени реки\n";
    cout << "2. По имени Александро-Невской лавры\n";
    cout << "3. В память об Александре Невском\n";
    cout << "Ваш ответ: ";
    cin >> otv;
    
    if(otv == 2) 
        cout<<"Правильно\n\n";
    else 
        cout<<"Вы ошиблись. Правильный ответ: 2\n\n";
}

void quest_93() {
    int a,b;
    cout<<"Введите два числа: ";
    cin>>a>>b;
    
    if(a > b) 
        cout<<a<<" больше "<<b<<"\n\n";
    else if(a < b) 
        cout<<a<<" меньше "<<b<<"\n\n";
    else 
        cout<<"Числа равны\n\n";
}

void quest_94() {
    int m1 = rand() % 9 + 1; // Числа от 1 до 9
    int m2 = rand() % 9 + 1;
    int p = m1 * m2;
    int otv;
    cout << "Сколько будет " << m1 << "x" << m2 << "? ";
    cin >> otv;
    
    if (otv==p) 
        cout << "Правильно!\n\n";
    else 
        cout << "Вы ошиблись. " << m1 << "x" << m2 << "=" << p << "\n\n";
}

void quest_95() {
    int a = rand() % 100 + 1; // Числа от 1 до 100
    int b = rand() % 100 + 1;
    
    // Убеждаемся, что a >= b для вычитания без отрицательных чисел
    if (a < b) { 
        int temp = a; 
        a = b; 
        b = temp; 
    } 
    
    int res = a - b;
    int otv;
    cout << "Сколько будет " << a << " - " << b << "? "; // Пробелы вокруг оператора
    cin >> otv;
    
    if (otv == res) 
        cout << "Правильно!\n\n";
    else 
        cout << "Вы ошиблись. " << a << " - " << b << " = " << res << "\n\n";
}

void quest_96() {
    int n;
    cout << "Введите целое число: ";
    cin >> n;
    
    if (n%2 == 0) // Без пробела после n
        cout << "Число " << n << " - четное\n\n";
    else 
        cout << "Число " << n << " - нечетное\n\n";
}

void quest_97() {
    int n;
    cout << "Введите целое число: ";
    cin >> n;
    
    if (n % 3 == 0) 
        cout << "Число " << n << " делится на 3\n\n";
    else 
        cout << "Число " << n << " на 3 не делится\n\n"; 
}

void quest_98() {
    int t, d;
    float cost;
    cout << "Длительность разговора (мин.): "; // Точка
    cin >> t;
    cout << "День недели (1-7): ";
    cin >> d;
    
    cost = 2.3 * t; // Цена минуты 2.3 руб
    
    if (d==6 || d==7) {
        cout << "Предоставляется скидка 20%\n";
        cost = cost * 0.8;
    }
    cout << "Стоимость разговора: " << cost << " руб\n\n";
}

void quest_99() {
    float h, w;
    cout << "Рост (см), и вес (кг): "; // Лишняя запятая
    cin >> h >> w;
    
    float opt = h - 100; // Идеальный вес по формуле "рост минус 100"
    
    if (w == opt) 
        cout << "Ваш вес оптимален!\n\n";
    else if (w < opt) 
        cout << "Вам надо поправиться на " << opt - w << " кг\n\n";
    else 
        cout << "Вам надо похудеть на " << w - opt << " кг\n\n";
}

void quest_100() {
    int m;
    cout << "Номер месяца (1-12): ";
    cin >> m;
    
    if (m >= 3 && m <= 5) 
        cout << "Весна\n\n";
    else if (m >= 6 && m <= 8) 
        cout << "Лето\n\n";
    else if (m >= 9 && m <= 11) 
        cout << "Осень\n\n";
    else if (m==12 || m==1 || m==2) // Сжатое условие
        cout << "Зима\n\n";
    else 
        cout << "Ошибка данных\n\n";
}

void quest_101() {
    int d;
    cout << "Номер дня недели (1-7): ";
    cin >> d;
    
    if (d>=1 && d<=5) 
        cout << "Рабочий день\n\n"; 
    else if (d == 6) 
        cout << "Суббота\n\n";
    else if (d == 7) 
        cout << "Воскресенье\n\n";
    else 
        cout << "Ошибка\n\n";
}

void quest_102() {
    int n;
    cout << "Введите число (1-999): ";
    cin >> n;
    
    cout << n << " ";
    int r = n;
    if(n>100) 
        r = n%100;
    
    if (r >= 11 && r <= 14) {
        cout << "рублей\n\n";
    } 
    else {
        int k = r % 10;
        if (k == 1) 
            cout << "рубль\n\n";
        else if (k >= 2 && k <= 4) 
            cout << "рубля\n\n";
        else 
            cout << "рублей\n\n";
    }
}

void quest_103() {
    int n;
    cout << "Введите число копеек (1-99): ";
    cin >> n;
    
    cout << n << " ";
    if (n >= 11 && n <= 14) 
        cout << "копеек\n\n";
    else {
        int k = n % 10;
        if (k == 1) 
            cout << "копейка\n\n";
        else if (k>=2 && k<=4) 
            cout << "копейки\n\n";
        else 
            cout << "копеек\n\n";
    }
}

void quest_104() {
    int d, m, y;
    cout << "Дата (день месяц год): ";
    cin >> d >> m >> y;
    
    int max_d = 31; 
    int last = 0; 
    
    // Определение максимального дня в месяце
    if (m == 2) {
        // Високосный год
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
            max_d = 29;
        else 
            max_d = 28;
    }
    // Месяцы по 30 дней
    else if (m==4 || m==6 || m==9 || m==11) {
        max_d = 30;
    }
    
    if (d == max_d) last = 1; // Проверка последнего дня
    
    if (last == 1) {
        d = 1;
        if (m == 12) {
            m = 1;
            y++;
            cout << "С наступающим Новым годом!\n";
        } 
        else {
            m++;
        }
    } 
    else {
        d++;
    }
    cout << "Завтра: " << d << "." << m << "." << y << "\n\n";
}

void all_tasks() {
    cout << "== Запуск всех задач (84-104) ==\n\n";
    cout<<"quest_84\n"; quest_84();
    cout<<"quest_85\n"; quest_85();
    cout<<"quest_86\n"; quest_86();
    cout<<"quest_87\n"; quest_87();
    cout<<"quest_88\n"; quest_88();
    cout<<"quest_89\n"; quest_89();
    cout<<"quest_90\n"; quest_90();
    cout<<"quest_91\n"; quest_91();
    cout<<"quest_92\n"; quest_92();
    cout<<"quest_93\n"; quest_93();
    cout<<"quest_94\n"; quest_94();
    cout<<"quest_95\n"; quest_95();
    cout<<"quest_96\n"; quest_96();
    cout<<"quest_97\n"; quest_97();
    cout<<"quest_98\n"; quest_98();
    cout<<"quest_99\n"; quest_99();
    cout<<"quest_100\n"; quest_100();
    cout<<"quest_101\n"; quest_101();
    cout<<"quest_102\n"; quest_102();
    cout<<"quest_103\n"; quest_103();
    cout<<"quest_104\n"; quest_104();
}

int main() {
    srand(time(NULL)); 
    int n;
    cout << "Введите номер задачи (84-104, 0 = all_tasks): ";
    cin >> n;

    if (n==0) { all_tasks(); return 0; }

    switch(n) {
        case 84: quest_84(); break;
        case 85: quest_85(); break;
        case 86: quest_86(); break;
        case 87: quest_87(); break;
        case 88: quest_88(); break;
        case 89: quest_89(); break;
        case 90: quest_90(); break;
        case 91: quest_91(); break;
        case 92: quest_92(); break;
        case 93: quest_93(); break;
        case 94: quest_94(); break;
        case 95: quest_95(); break;
        case 96: quest_96(); break;
        case 97: quest_97(); break;
        case 98: quest_98(); break;
        case 99: quest_99(); break;
        case 100: quest_100(); break;
        case 101: quest_101(); break;
        case 102: quest_102(); break;
        case 103: quest_103(); break;
        case 104: quest_104(); break;
        default: cout << "Нет такой задачи.\n";
    }
}
