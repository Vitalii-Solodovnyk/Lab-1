# Marża (cena sprzedaży)

Program oblicza cenę sprzedaży na podstawie ceny zakupu (netto) i marży w procentach.

- src/main.c – kod źródłowy w C
- flow/schemat_blokowy.txt – schemat blokowy w formacie tekstowym
- mermaid/diagram.mmd – diagram w formacie Mermaid
- mermaid/diagram.png – wizualizacja diagramu

Program: Marza (cena sprzedazy)
Podaj cene zakupu netto (np. 100.00): 200
Podaj marze w procentach (np. 30): 30

Cena sprzedazy = 260.000000

gcc -Wall src/main.c -o konwerter.exe


flowchart TD
    A[Start] --> B[Wczytaj purchaseNet]
    B --> C[Wczytaj marginPercent]
    C --> D{Czy oba odczyty poprawne?}
    D -- Nie --> E[Drukuj błąd i Stop]
    D -- Tak --> F[Oblicz sellingPrice = purchaseNet * (1 + marginPercent / 100)]
    F --> G[Wyświetl sellingPrice]
    G --> H[Stop]
