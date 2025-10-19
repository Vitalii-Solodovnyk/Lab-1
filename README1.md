# Konwerter PLN → USD

Program konwertuje kwotę w złotówkach (PLN) na dolary (USD) na podstawie kursu podanego przez użytkownika.

- src/main.c – kod źródłowy w C
- flow/schemat_blokowy.txt – schemat blokowy w formacie tekstowym
- mermaid/diagram.mmd – diagram w formacie Mermaid
- mermaid/diagram.png – wizualizacja diagramu


Konwerter PLN -> USD 
Podaj kwotę w PLN: 1000
Podaj kurs USD/PLN (np. 4.25): 4.25

1000.000000 PLN = 235.294118 USD

gcc -Wall src/main.c -o konwerter.exe


### Kod Mermaid
flowchart TD
    A[Start] --> B[Wczytaj amountPLN]
    B --> C[Wczytaj kurs USD/PLN]
    C --> D{Czy oba odczyty poprawne?}
    D -- Nie --> E[Drukuj błąd i Stop]
    D -- Tak --> F[Oblicz amountUSD = amountPLN / rate]
    F --> G[Wyświetl wynik]
    G --> H[Stop]
