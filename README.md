# projekt_gra
Autor: Dominika Maciąg

Planuję stworzyć grę platformową, która będzie inspirowana supermario/innymi prostymi grami zręcznościowymi. 
Na mapie będą platformy oraz przeszkody, które nasz bohater będzie musiał pokonać. 
W zależności od tego na ile pozwolą mi moje zdolności postaram się stworzyć grę w której naszym bohaterem jest Czerwony Kapturek, którego goni zły wilk. Mapą będzie las, wypełniony przeszkodami i pułapkami. Naszej postaci grożą trujące grzyby oraz dzikie zwierzęta. Nasz kapturek musi przejść całą mapę zbierając serca (odpowiednik monet w mario), by wykonać swój cel - przynieść koszyczek dla swojej chorej babci. By dotrzeć do domku babci nasza postać musi przejść przez cały las (mapę). 
Pomysł na grę to jak na razie jedynie zarys, zapewne ulegnie on podczas tworzenia projektu zmianie. Każda zamieszczona tu grafika, została wykonana przeze mnie. 


Update #1 30.04.2020r.
Na razie poznaję bibliotekę sfml by pójść do przodu z moim projektem gry. 
Stworzyłam do tego plik main.cpp, którego nazwa może ulec zmianie w późniejszym stadium tworzenia projektu.
Wyświetliłam w oknie naszą postać. Można nią poruszać klikając strzałkami w prawo/lewo oraz górę/dół. 
Aby uruchomić program wpisujemy w konsolę terminala kolejno:

g++ -c main.cpp

g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

./sfml-app


