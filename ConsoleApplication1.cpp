#include <iostream> 
/*НОД - Алгоритм Евклида*/
int loft(int num_1, int num_2){
    int num_3 = num_1 % num_2;
    if (num_3 == 0) { return 0; }
    else { return num_3; }
}
int main(){   
    setlocale(LC_ALL, "Russian");
    int pr_1 = 0;   int pr_2 = 0;
    int swap = 0;   int run = 1;
    std::cout << "Введите числа для нахождения общего делителя: \n";
    std::cin >> pr_1 >> pr_2;
    while (run){
        if (pr_1 < pr_2) {
            swap = pr_2;    pr_2 = pr_1;    pr_1 = swap; 
        }
        pr_1 = loft(pr_1, pr_2);
        if (loft(pr_2, pr_1) == 0) { run = 0; }
    }
    std::cout << "\nТвой наибольший общий делитель: " << pr_1<<"\n";
    return 0;
}