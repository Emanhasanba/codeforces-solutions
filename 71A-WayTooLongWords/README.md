

## 📌 المسألة: A. Way Too Long Words (71A)

🔗 **رابط المسألة على Codeforces:** [اضغط هنا للمشاهدة](https://codeforces.com/problemset/problem/71/A)

---

## 🧠 تحليل وفكرة الحل

تعتمد فكرة الحل على فحص طول السلسلة النصية (String) ومعالجتها بناءً على الشرط التالي:

1. **إذا كان طول الكلمة أكبر من 10 أحرف (Strictly More than 10):**
   - يتم استبدال الكلمة باختصار مكون من:
     - الحرف الأول من الكلمة (`word[0]`).
     - عدد الأحرف المحصورة بين الحرف الأول والأخير (`length - 2`).
     - الحرف الأخير من الكلمة (`word[length - 1]`).
2. **إذا كان طول الكلمة 10 أحرف أو أقل:**
   - تُطبع الكلمة كما هي تماماً دون أي تعديل.

---

## 💡 توضيح بالمثال (Example)

### المدخلات (Input):
```text
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

 المخرجات 
word
l10n
i18n
p43s