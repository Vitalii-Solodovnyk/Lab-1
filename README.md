# Program: Marza (cena sprzedaży)

## Opis
Program oblicza cenę sprzedaży na podstawie ceny zakupu (netto) i marży w procentach.
Wejście: float purchaseNet, float marginPercent.
Wyjście: sellingPrice (wydrukowane z %f).

## Pliki w projekcie
- `src/main.c` – kod źródłowy w C
- `flow/schemat_blokowy.txt` – schemat blokowy w formacie tekstowym
- `mermaid/diagram.mmd` – diagram w formacie Mermaid
- `mermaid/diagram.png` – gotowa wizualizacja diagramu

## Kompilacja (GCC)
```bash
gcc -Wall src/main.c -o marza.exe


lowchart TD
    A[Start] --> B[Wczytaj purchaseNet]
    B --> C[Wczytaj marginPercent]
    C --> D{Czy oba odczyty poprawne?}
    D -- Nie --> E[Drukuj błąd i Stop]
    D -- Tak --> F[Oblicz sellingPrice = purchaseNet * (1 + marginPercent/100)]
    F --> G[Wyświetl sellingPrice]
    G --> H[Stop]





    # Program: Konwerter PLN → USD

## Opis
Program konwertuje kwotę w złotówkach (PLN) na dolary amerykańskie (USD) na podstawie kursu podanego przez użytkownika.
Wejście: float amountPLN, float rate  
Wyjście: amountUSD (wydrukowane z %f).

## Pliki w projekcie
- `src/main.c` – kod źródłowy w C
- `flow/schemat_blokowy.txt` – schemat blokowy w formacie tekstowym
- `mermaid/diagram.mmd` – diagram w formacie Mermaid
- `mermaid/diagram.png` – gotowa wizualizacja diagramu

## Kompilacja (GCC)
```bash
gcc -Wall src/main.c -o konwerter.exe



flowchart TD
    A[Start] --> B[Wczytaj amountPLN]
    B --> C[Wczytaj kurs USD/PLN]
    C --> D{Czy oba odczyty poprawne?}
    D -- Nie --> E[Drukuj błąd i Stop]
    D -- Tak --> F[Oblicz amountUSD = amountPLN / rate]
    F --> G[Wyświetl wynik]
    G --> H[Stop]
