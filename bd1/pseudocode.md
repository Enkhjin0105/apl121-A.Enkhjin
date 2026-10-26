# Псевдокод: Голч дүн (GPA)

## Хувьсагч
- n: хичээлийн тоо (5-10)
- score: оноо (0-100)
- credit: кредит (1-5)
- point: голчийн оноо (ToPoint функцээс)
- totalCredit, totalPoints: нийлбэрүүд
- gpa: эцсийн голч
- max1, max2, max3: шилдэг 3 оноо

## Үндсэн алгоритм (Main)
1. ЭХЛЭЛ
2. ДАВТ
     n уншина
   ДАРАА НЬ (n < 5 эсвэл n > 10) байх хооронд
3. totalCredit = 0, totalPoints = 0
4. max1 = 0, max2 = 0, max3 = 0
5. i = 1-ээс n хүртэл ДАВТ
     ДАВТ
       score уншина
     ДАРАА НЬ (score < 0 эсвэл score > 100) байх хооронд
     ДАВТ
       credit уншина
     ДАРАА НЬ (credit < 1 эсвэл credit > 5) байх хооронд
     point = ToPoint(score)        ← функц дуудна
     totalPoints = totalPoints + point * credit
     totalCredit = totalCredit + credit
     хүснэгтийн мөр хэвлэнэ
     хэрэв score > max1 бол
        max3 = max2, max2 = max1, max1 = score
     үгүй бол хэрэв score > max2 бол
        max3 = max2, max2 = score
     үгүй бол хэрэв score > max3 бол
        max3 = score
6. gpa = totalPoints / totalCredit
7. gpa, max1, max2, max3 хэвлэнэ
8. ДУУС

## Функц ToPoint(score)
хэрэв score >= 94 бол буцаа 4.0
үгүй бол хэрэв score >= 90 бол буцаа 3.7
үгүй бол хэрэв score >= 87 бол буцаа 3.3
үгүй бол хэрэв score >= 83 бол буцаа 3.0
үгүй бол хэрэв score >= 80 бол буцаа 2.7
үгүй бол хэрэв score >= 77 бол буцаа 2.3
үгүй бол хэрэв score >= 73 бол буцаа 2.0
үгүй бол хэрэв score >= 70 бол буцаа 1.7
үгүй бол хэрэв score >= 67 бол буцаа 1.3
үгүй бол хэрэв score >= 63 бол буцаа 1.0
үгүй бол хэрэв score >= 60 бол буцаа 0.7
үгүй бол буцаа 0.0
