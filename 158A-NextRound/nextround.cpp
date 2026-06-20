#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // فحص قيود المسألة وصيد الأخطاء
    if (k < 1 || n > 50 || k > n) {
        cout << "Error: Inputs are out of constraints!" << endl;
        return 0; 
    } // <-- تم إضافة هذا القوس المفقود لإغلاق جملة الـ if بشكل صحيح

    // استقبال درجات المتسابقين داخل المصفوفة
    vector<int> score(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    int advancers = 0; 

    // حلقة لفحص شروط التأهل وحساب عدد المتأهلين
    for (int i = 0; i < n; i++) {
        if (score[i] >= score[k - 1] && score[i] > 0) {
            advancers++; 
        }
    }

    // طباعة النتيجة النهائية
    cout << advancers << endl;

    return 0;
}