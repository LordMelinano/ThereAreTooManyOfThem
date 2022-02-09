# ThereAreTooManyOfThem
 Master Skywalker, there are too many of them! What are we going to do?

_Disclaimer_<br />
Spiel und Server sind nicht miteinander verbunden. Das Spiel kann im aktuellen Zustand nicht mit
dem Server interagieren, da die HTTP-Anfragen nicht eingebunden sind.

## Server
Um den Server zu starten ziehen Sie sich bitte folgende Datei aus dem Repository.<br />
*__..\server\Debug\server.exe__*<br />
Dies ist die Exe Datei des Servers. Bitte Speichern Sie diese Datein innerhalb eines Ordners,<br />
da die Datei eine Datenbank erstellt, auf welche später zugegriffen wird. Ist der Server erfolgreich <br />
gestartet gibt dieser nun folgende zwei Zeilen aus<br />
_"Opened database"_ und _"starting to listen"_<br />
Danach ist der Server voll funktionsbereit und man kann sehen, dass eine Datenbank erstellt wurde.<br />

_Optional_
Möchten Sie diesen nun testen können Sie den Code herunterladen und das Projekt in Visual Studio laden.<br />
Hier müssen im Projektmappen-Explorer auf die Projektmappe einen Linksklick machen und das Startprojekt auswählen.<br />
In diesem Falle den Client. Ist der Server gestartet und bereit können Sie nun über Visual Studio das Client Porjekt starten<br />
Hier sehen Sie nun, dass zuerst eine GET-Anfrage geschickt wird und danach eine POST-Anfrage. Bei der GET-Anfrage werden Sie keine Daten<br />
erhalten, da die Datenbank neu erstellt wurde. Starten Sie den Client erneut, sehen Sie, dass Sie einen Spieler mit einem Wert erhalten.

Der Code für den Server ist im folgenden Pfad zu finden:<br />
*__..\server\server__*<br />
*server.cpp* - dies ist der Server<br />
*database.h* und *database.cpp* - sind zur Datenbankverwaltung<br />


### Server:Funktionen
Der Server kann einen Namen mit einem erreichten Wert entgegennehmen und diesen in der Datenbank<br />
speichern bzw. wenn ein Eintrag mit entsprechendem Namen schon vorhanden ist aktualisieren <br />
(Falls der erreichte Wert größer ist, als der des Eintrages). Ebenso kann der Server die gesamten Daten aus der Datenbank ausgeben.<br />


### Server:Client
Hier finden die Anfragen vom Client statt. Es kann eine GET-Anfrage gestellt werden, in welcher der Client die gesamte<br />
Highscoreliste erhält. Ebenso kann eine POST-Anfrage gesendet werden, in welcher der Client die erreichten Werte des<br />
Spielers an den Server übermittelt, welcher diese Daten wiederum in der Datenbank speichert.<br />

Der Code für den Client ist im folgenden Pfad zu finden:<br />
*__..\server\client__*<br />
*client.cpp* - dies ist die Testklasse des clients. Hiermit wurde die Funktionalität des Servers überprüft.<br />
*request.cpp* und *request.h* - dies sind die Dateien, welche in das eigentliche Spiel implementiert werden sollten.<br />


## Client - UE4 Spiel
