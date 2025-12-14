#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;

long long factorial(int k) {
    long long res = 1;
    for (int i = 2; i <= k; i++) {
        res *= i;
    }
    return res;
}

void quest_117() {
    int n;
    cout << "Введите N: ";
    cin >> n;
    
    long long s = 0; 
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    cout << "Сумма чисел от 1 до " << n << " = " << s << "\n\n";
}

void quest_118() {
    int n;
    cout << "Введите число для факториала (N): ";
    cin >> n;
    
    long long f = 1;
    if (n < 0) {
        cout << "Ошибка. Факториал отрицательного числа не существует.\n\n";
        return;
    }
    
    for (int i = 1; i <= n; ++i) 
        f *= i;

    cout << n << "! = " << f << "\n\n";
}

void quest_119() {
    float a;
    int n;
    cout << "Введите число (A) и степень (N): ";
    cin >> a >> n;
    
    float res = 1.0;
    
    if (n >= 0) {
        for (int i = 0; i < n; i++) {
            res = res * a;
        }
    } else {
        
        for (int i = 0; i < -n; i++) {
            res = res / a;
        }
    }
    
    cout << a << "^" << n << " = " << res << "\n\n";
}

void quest_120() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    
    cout << "Делители числа " << n << ":\n"; 
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << "\n";
        }
    }
    cout << "\n"; 
}

void quest_121() {
    int n;
    cout << "Проверка простоты. Введите число: ";
    cin >> n;
    
    int is_prime = 1; 
    if (n <= 1) is_prime = 0;
    
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    
    if (is_prime == 1) 
        cout << n << " - простое число\n\n";
    else 
        cout << n << " - составное число\n\n";
}

void quest_122() {
    int n;
    cout << "Сумма цифр. Ведите число: "; 
    cin >> n;
    
    int s = 0;
    int temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        s += digit;
        temp /= 10;
    }
    
    cout << "Сумма цифр числа " << n << " равна " << s << "\n\n";
}

void quest_123() {
    int n;
    cout << "Введите число для реверса: ";
    cin >> n;
    
    int rev = 0;
    int temp = n;
    
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    
    cout << "Исходное: " << n << ", Реверс: " << rev << "\n\n";
}

void quest_124() {
    int a, b;
    cout << "Введите два числа (a b) для НОД: ";
    cin >> a >> b;
    
    int tempA = a;
    int tempB = b;
    
    
    while(tempB != 0) {
        int r = tempA % tempB;
        tempA = tempB;
        tempB = r;
    }
    
    cout << "НОД(" << a << ", " << b << ") = " << tempA << "\n\n";
}

void quest_125() {
    int a, b;
    cout << "Введите два числа (a b) для НОК: ";
    cin >> a >> b;

    int tempA = a, tempB = b;
    
    
    while (tempB != 0) {
        int r = tempA % tempB;
        tempA = tempB;
        tempB = r;
    }
    int nod = tempA;
    
    
    long long nok = (long long)a * b / nod;

    cout << "НОК(" << a << ", " << b << ") = " << nok << "\n\n";
}

void quest_126() {
    float s;
    cout << "Введите число S: ";
    cin >> s;
    
    float current_sum = 0.0;
    int n = 0;
    
    
    while (current_sum <= s) {
        n++;
        current_sum += 1.0 / n;
    }
    
    
    cout << "Минимальное N, при котором сумма 1/i > S (" << s << "): " << n << "\n\n";
}

void quest_127() {
    int n;
    cout << "Сколько членов Фибоначчи вывести? ";
    cin >> n;
    
    int a = 0, b = 1;
    cout << "Ряд Фибоначчи:\n";
    
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    
    for (int i = 3; i <= n; ++i) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << "\n\n";
}

void quest_128() {
    int n;
    cout << "Какой по счету член Фибоначчи найти? (N): ";
    cin >> n;
    
    int a = 0, b = 1;
    int res = 0;
    
    if (n == 1) res = a;
    else if (n == 2) res = b;
    else {
        for (int i = 3; i <= n; ++i) {
            res = a + b;
            a = b;
            b = res;
        }
    }
    
    cout << n << "-й член Фибоначчи: " << res << "\n\n";
}

void quest_129() {
    int a, b, m;
    cout << "Введите начало (A), конец (B) диапазона и делитель (M): ";
    cin >> a >> b >> m;
    
    int count = 0;
    
    for (int i = a; i <= b; i++) {
        if (i % m == 0) {
            count++;
        }
    }
    
    cout << "Количество чисел, кратных " << m << ": " << count << "\n\n";
}

void quest_130() {
    int n;
    cout << "Сумма квадратов. Введите N: ";
    cin >> n;
    
    long long s = 0;
    for (int i = 1; i <= n; i++) {
        s = s + (long long)i * i; 
    }
    cout << "Сумма квадратов от 1 до " << n << " = " << s << "\n\n";
}

void quest_131() {
    
    float x;
    int n;
    cout << "Введите X и количество членов ряда (N): ";
    cin >> x >> n;

    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        
        
        float term = pow(x, i) / factorial(i);
        sum += term;
    }
    
    cout << fixed << setprecision(5); 
    cout << "Сумма ряда e^x (" << x << ") с " << n << " членами = " << sum << "\n\n";
}

void quest_132() {
    
    float x;
    int n;
    cout << "Введите X (радиан) и количество членов ряда (N): ";
    cin >> x >> n;
    
    float sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        int k = 2 * i + 1; 
        float term = pow(x, k) / factorial(k);
        
        if (i % 2 == 1) { 
            sum -= term;
        } else {
            sum += term;
        }
    }
    
    cout << setprecision(6) << "Сумма ряда sin(x) (" << x << ") с " << n << " членами = " << sum << "\n\n";
}

void quest_133() {
    int s;
    cout << "Введите пороговое значение S: ";
    cin >> s;
    
    int current_sum = 0;
    int n = 0;
    
    
    while (current_sum <= s) {
        n++;
        current_sum += n;
    }
    
    cout << "Минимальное N, при котором сумма 1+2+...+N > S (" << s << "): " << n << "\n\n";
}

void quest_134() {
    int n;
    cout << "Произведение цифр. Введите число: ";
    cin >> n;
    
    long long p = 1;
    int temp = n;
    
    if (temp == 0) p = 0; 
    
    while (temp > 0) {
        p *= (temp % 10);
        temp /= 10;
    }
    
    cout << "Произведение цифр числа " << n << " = " << p << "\n\n";
}

void quest_135() {
    int n;
    cout << "Мин. и Макс. цифра. Введите число: ";
    cin >> n;
    
    if (n < 0) n = -n; 
    
    int min_d, max_d;
    int temp = n;
    
    if (temp == 0) {
        min_d = 0; 
        max_d = 0;
    } else {
        int d = temp % 10;
        min_d = d;
        max_d = d;
        temp /= 10;

        while (temp > 0) {
            d = temp % 10;
            if (d < min_d) min_d = d;
            if (d > max_d) max_d = d;
            temp /= 10;
        }
    }
    
    cout << "Минимальная цифра: " << min_d << "\nМаксимальная цифра: " << max_d << "\n\n";
}

void quest_136() {
    float a;
    int n;
    cout << "Геометрическая прогрессия. Введите A и N: ";
    cin >> a >> n;
    
    float sum = 0.0;
    float current_term = 1.0; 
    
    for (int i = 0; i <= n; i++) {
        sum += current_term;
        current_term *= a;
    }
    
    cout << "Сумма 1 + A + A^2 + ... + A^N = " << sum << "\n\n";
}

void quest_137() {
    int n;
    cout << "Размер треугольника (N): ";
    cin >> n;
    
    cout << "Треугольник из звездочек:\n";
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= i; j++) { 
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void all_tasks() {
    cout << "== Запуск всех задач (117-137) ==\n\n";
    cout << "quest_117\n"; quest_117();
    cout << "quest_118\n"; quest_118();
    cout << "quest_119\n"; quest_119();
    cout << "quest_120\n"; quest_120();
    cout << "quest_121\n"; quest_121();
    cout << "quest_122\n"; quest_122();
    cout << "quest_123\n"; quest_123();
    cout << "quest_124\n"; quest_124();
    cout << "quest_125\n"; quest_125();
    cout << "quest_126\n"; quest_126();
    cout << "quest_127\n"; quest_127();
    cout << "quest_128\n"; quest_128();
    cout << "quest_129\n"; quest_129();
    cout << "quest_130\n"; quest_130();
    cout << "quest_131\n"; quest_131();
    cout << "quest_132\n"; quest_132();
    cout << "quest_133\n"; quest_133();
    cout << "quest_134\n"; quest_134();
    cout << "quest_135\n"; quest_135();
    cout << "quest_136\n"; quest_136();
    cout << "quest_137\n"; quest_137();
}


int main() {
    srand(time(NULL)); 
    int n;
    cout << "Введите номер задачи (117-137, 0 = all_tasks): ";
    cin >> n;

    if (n==0) { all_tasks(); return 0; }

    switch(n) {
        case 117: quest_117(); break;
        case 118: quest_118(); break;
        case 119: quest_119(); break;
        case 120: quest_120(); break;
        case 121: quest_121(); break;
        case 122: quest_122(); break;
        case 123: quest_123(); break;
        case 124: quest_124(); break;
        case 125: quest_125(); break;
        case 126: quest_126(); break;
        case 127: quest_127(); break;
        case 128: quest_128(); break;
        case 129: quest_129(); break;
        case 130: quest_130(); break;
        case 131: quest_131(); break;
        case 132: quest_132(); break;
        case 133: quest_133(); break;
        case 134: quest_134(); break;
        case 135: quest_135(); break;
        case 136: quest_136(); break;
        case 137: quest_137(); break;
        default: cout << "Нет такой задачи.\n";
    }
}
