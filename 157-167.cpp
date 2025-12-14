#include <iostream>
#include <vector> 
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void quest_157() {
    int n;
    cout << "Введи количество элементов массива (N): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введи " << n << " целых чисел:\n";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Элементы массива:\n";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
}

void quest_158() {
    int n;
    cout << "Размер массива: ";
    cin >> n;

    vector<int> arr(n);
    long long sum = 0; 

    cout << "Введи числа:\n";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Сумма элементов массива: " << sum << "\n\n";
}

void quest_159() {
    int n;
    cout << "Размер масива: "; 
    cin >> n;

    if (n <= 0) {
        cout << "Массив пуст или неверен.\n\n";
        return;
    }
    
    vector<int> a(n);
    cout << "Введи елементы:\n"; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_val = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }

    cout << "Максимальное значение в масиве: " << max_val << "\n\n";
}

void quest_160() {
    int n;
    cout << "Размер массива: ";
    cin >> n;

    vector<int> arr(n);
    int pos_count = 0;
    int neg_count = 0;
    
    cout << "Введи числа для проверки:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int x : arr) {
        if (x > 0) pos_count++;
        else if (x < 0) neg_count++;
    }

    cout << "Положительных: " << pos_count << endl;
    cout << "Отрицательных: " << neg_count << "\n\n";
}

void quest_161() {
    int n;
    cout << "Сколько елементов? "; 
    cin >> n;

    if (n <= 0) {
        cout << "Нельзя вычислить среднее.\n\n";
        return;
    }

    vector<int> arr(n);
    long long sum = 0;
    cout << "Введи числа для ср.арифметического:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = (double)sum / n;
    cout.precision(2);
    cout << fixed << "Среднее арифметическое: " << avg << "\n\n";
}

void quest_162() {
    int n;
    cout << "Размер массива: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Введи числа:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Какое число найти? ";
    cin >> target;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break; 
        }
    }
    
    if (index != -1)
        cout << "Число " << target << " найдено на позиции (индекс): " << index << "\n\n";
    else
        cout << "Число " << target << " не найдено в массиве.\n\n";
}

void quest_163() {
    int n;
    cout << "Введите размер: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введи элементы:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Массив в обратном порядке: ";
    for (int x : arr) cout << x << " ";
    cout << "\n\n";
}

void quest_164() {
    int rows, cols;
    cout << "Размерность матрицы (строки столбцы): ";
    cin >> rows >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Некорректный размер.\n\n";
        return;
    }

    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    cout << "Введи елементы " << rows << "x" << cols << " матрицы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Твоя матрица:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

void quest_165() {
    int n;
    cout << "Размер квадратной матрицы (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Некорректный размер.\n\n";
        return;
    }

    vector<vector<int>> m(n, vector<int>(n));
    long long diag_sum = 0;
    
    cout << "Введи елементы " << n << "x" << n << " матрицы:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
            if (i == j) {
                diag_sum += m[i][j]; 
            }
        }
    }

    cout << "Сумма элементов главной диагонали: " << diag_sum << "\n\n";
}

void quest_166() {
    int rows, cols;
    cout << "Размер матрицы (строки столбцы): ";
    cin >> rows >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Некорректный размер.\n\n";
        return;
    }

    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    cout << "Введи елементы:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int max_val = matrix[0][0]; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
            }
        }
    }

    cout << "Максимальный елемент в матрице: " << max_val << "\n\n";
}

void quest_167() {
    int n;
    cout << "Размер массива: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введи числа:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int k;
    cout << "Какое число (K) считать? ";
    cin >> k;

    int count = 0;
    for (int x : arr) {
        if (x == k) {
            count++;
        }
    }

    cout << "Число " << k << " встречается " << count << " раз.\n\n";
}

void all_tasks() {
    cout << "== Запуск всех задач (157-167) ==\n\n";
    cout << "quest_157\n"; quest_157();
    cout << "quest_158\n"; quest_158();
    cout << "quest_159\n"; quest_159();
    cout << "quest_160\n"; quest_160();
    cout << "quest_161\n"; quest_161();
    cout << "quest_162\n"; quest_162();
    cout << "quest_163\n"; quest_163();
    cout << "quest_164\n"; quest_164();
    cout << "quest_165\n"; quest_165();
    cout << "quest_166\n"; quest_166();
    cout << "quest_167\n"; quest_167();
}

int main() {
    srand(time(NULL)); 
    int n;
    cout << "Введите номер задачи (157-167, 0 = all_tasks): ";
    cin >> n;

    if (n==0) { all_tasks(); return 0; }

    switch(n) {
        case 157: quest_157(); break;
        case 158: quest_158(); break;
        case 159: quest_159(); break;
        case 160: quest_160(); break;
        case 161: quest_161(); break;
        case 162: quest_162(); break;
        case 163: quest_163(); break;
        case 164: quest_164(); break;
        case 165: quest_165(); break;
        case 166: quest_166(); break;
        case 167: quest_167(); break;
        default: cout << "Нет такой задачи.\n";
    }
}
