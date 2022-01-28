/*Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
y luego imprima cuantas veces se repite cada letra en el arreglo.

Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABAR-
SECAAB

A: 4
B: 2
C: 1
Y así sucesivamente. */
#include <iostream>
using namespace std;

void contar(char palabras[]){
    char letras[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int totalChars = char_traits<char>::length(palabras),
        a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    for (int i = 0; i < totalChars; i++)
        switch (palabras[i]){
            case 'a':case 'A': a++;break;
            case 'b':case 'B': b++;break;
            case 'c':case 'C': c++;break;
            case 'd':case 'D': d++;break;
            case 'e':case 'E': e++;break;
            case 'f':case 'F': f++;break;
            case 'g':case 'G': g++;break;
            case 'h':case 'H': h++;break;
            case 'i':case 'I': i++;break;
            case 'j':case 'J': j++;break;
            case 'k':case 'K': k++;break;
            case 'l':case 'L': l++;break;
            case 'm':case 'M': m++;break;
            case 'n':case 'N': n++;break;
            case 'o':case 'O': o++;break;
            case 'p':case 'P': p++;break;
            case 'q':case 'Q': q++;break;
            case 'r':case 'R': r++;break;
            case 's':case 'S': s++;break;
            case 't':case 'T': t++;break;
            case 'u':case 'U': u++;break;
            case 'v':case 'V': v++;break;
            case 'w':case 'W': w++;break;
            case 'x':case 'X': x++;break;
            case 'y':case 'Y': y++;break;
            case 'z':case 'Z': z++;break;
        }
    cout << "Palabras: " << palabras << endl << endl;
    if (a) cout << "Hay " << a << (a > 1 ? " letras " : " letra ") << "A" << endl;
    if (b) cout << "Hay " << b << (b > 1 ? " letras " : " letra ") << "B" << endl;
    if (c) cout << "Hay " << c << (c > 1 ? " letras " : " letra ") << "C" << endl;
    if (d) cout << "Hay " << d << (d > 1 ? " letras " : " letra ") << "D" << endl;
    if (e) cout << "Hay " << e << (e > 1 ? " letras " : " letra ") << "E" << endl;
    if (f) cout << "Hay " << f << (f > 1 ? " letras " : " letra ") << "F" << endl;
    if (g) cout << "Hay " << g << (g > 1 ? " letras " : " letra ") << "G" << endl;
    if (h) cout << "Hay " << h << (h > 1 ? " letras " : " letra ") << "H" << endl;
    if (i) cout << "Hay " << i << (i > 1 ? " letras " : " letra ") << "I" << endl;
    if (j) cout << "Hay " << j << (j > 1 ? " letras " : " letra ") << "J" << endl;
    if (k) cout << "Hay " << k << (k > 1 ? " letras " : " letra ") << "K" << endl;
    if (l) cout << "Hay " << l << (l > 1 ? " letras " : " letra ") << "L" << endl;
    if (m) cout << "Hay " << m << (m > 1 ? " letras " : " letra ") << "M" << endl;
    if (n) cout << "Hay " << n << (n > 1 ? " letras " : " letra ") << "N" << endl;
    if (o) cout << "Hay " << o << (o > 1 ? " letras " : " letra ") << "O" << endl;
    if (p) cout << "Hay " << p << (p > 1 ? " letras " : " letra ") << "P" << endl;
    if (q) cout << "Hay " << q << (q > 1 ? " letras " : " letra ") << "Q" << endl;
    if (r) cout << "Hay " << r << (r > 1 ? " letras " : " letra ") << "R" << endl;
    if (s) cout << "Hay " << s << (s > 1 ? " letras " : " letra ") << "S" << endl;
    if (t) cout << "Hay " << t << (t > 1 ? " letras " : " letra ") << "T" << endl;
    if (u) cout << "Hay " << u << (u > 1 ? " letras " : " letra ") << "U" << endl;
    if (v) cout << "Hay " << v << (v > 1 ? " letras " : " letra ") << "V" << endl;
    if (w) cout << "Hay " << w << (w > 1 ? " letras " : " letra ") << "W" << endl;
    if (x) cout << "Hay " << x << (x > 1 ? " letras " : " letra ") << "X" << endl;
    if (y) cout << "Hay " << y << (y > 1 ? " letras " : " letra ") << "Y" << endl;
    if (z) cout << "Hay " << z << (z > 1 ? " letras " : " letra ") << "Z" << endl;
}

int main() {
    char palabras[] = "PARANGUARUTIRIMICUARO AXPNRITUSN zA WaRuDo";
    contar(palabras);
    return 0;
}
