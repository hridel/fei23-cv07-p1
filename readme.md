# Příklad 1
## Textový soubor

Napište program, který:

- Načtete z klávesnice větu o maximální délce 100 znaků.
- Tuto větu uloží do souboru _input.txt_.
- Přečte ze souboru _input.txt_ jednotlivé znaky, malé znaky (a-z) převede na velké a postupně je ukládá do souboru _output.txt_ a zároveň je tiskne na obrazovku.

---

**Nápověda:**

```c
*fopen(const char *__filename, const char *__mode)  

int fprintf(__sFILE *, const char *, …)

int fclose(__sFILE *)

int fgetc(__sFILE *)

int fputc(int, __sFILE *)

inline int toupper(int _c) // #include <ctype.h>
```