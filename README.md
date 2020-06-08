# projekt_gra
Autor: Dominika Maciąg

Planuję stworzyć grę platformową, która będzie inspirowana supermario/innymi prostymi grami zręcznościowymi. 
Na mapie będą platformy oraz przeszkody, które nasz bohater będzie musiał pokonać. 
W zależności od tego na ile pozwolą mi moje zdolności postaram się stworzyć grę w której naszym bohaterem jest Czerwony Kapturek, którego goni zły wilk. Mapą będzie las, wypełniony przeszkodami i pułapkami. Naszej postaci grożą trujące grzyby oraz dzikie zwierzęta. Nasz kapturek musi przejść całą mapę zbierając serca (odpowiednik monet w mario), by wykonać swój cel - przynieść koszyczek dla swojej chorej babci. By dotrzeć do domku babci nasza postać musi przejść przez cały las (mapę). 
Pomysł na grę to jak na razie jedynie zarys, zapewne ulegnie on podczas tworzenia projektu zmianie. Każda zamieszczona tu grafika, została wykonana przeze mnie. 


///////////////////////////
Poznaję bibliotekę sfml, by ruszyć do przodu z moim projektem gry. 
Stworzyłam do tego plik main.cpp, którego nazwa może ulec zmianie w późniejszym stadium tworzenia projektu.
Wyświetliłam w oknie naszą postać. Można nią poruszać klikając strzałkami w prawo/lewo oraz górę/dół. 



///////////////////////////
Update #2 16.05-17.05.2020r.

W swojej grze poprawiłam sposób poruszania się postacią, dodałam muzykę, bloki po których postać może się poruszać oraz tło mapy. 
Dodatkowo nasza postać przyśpiesza gdy poruszamy się w prawo/lewo po płaskim terenie. 
Stworzyłam również makefile dzięki któremu kompilujemy oraz uruchamiamy grę wpisując w konsolę: make run


///////////////////////////
Update #3 23.05-24.05.2020r.

Utworzyłam klasę do bloczkow, którą rozdzieliłam do pliku KlasaBlok.cpp oraz KlasaBlok.h oraz poprawiłam grafikę. Dodałam również konstruktor oraz konstruktor kopiujący.

///////////////////////////
Update #4 26.05.2020r.

Utworzyłam klasę drzew KlasaDrzewo.cpp i KlasaDrzewo.h oraz dodałam oddzielne grafiki postaci, gdy porusza się w lewo/prawo.

///////////////////////////
Update #5 31.05.2020r.

Utworzyłam klasę abstrakcyjną która będzie odpowiadać za przyszłe klasy związane z monetami. Dodałam również tekst wyświetlający się w naszym oknie.

///////////////////////////
Update #6 03.06.2020r.

Dodałam zakresową pętlę for, ulepszyłam tekst od teraz wyświetla wynik zdobytych punktów z zebranych monet. Moneta złota daje 20 punktów, natomiast srebrna 10. Dodatkowo kolor tekstu się zmienia.

///////////////////////////
Update #7 04.06.2020r.

Dodałam deklarację przyjaciela w klasie macierzystej Monety oraz przeciążenie operatorów
