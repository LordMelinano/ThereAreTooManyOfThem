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


## UE4 Spiel
In dem Ordner *__..\Client\Younglings\Source\Younglings__* befinden sich die CodeDateien für das Unreal Engine Spiel.<br/>
Es bietet sich an für die Inspektion des SourceCodes, die .sln in VisualStudio zu öffnen. Die .uaproject-Datei ist spezifisch<br/>
für den Editor der UnrealEngine4 und erfordert jene installiert zu haben.<br/>
*MainMenu.cpp* - ist die C++-Klasse hinter dem MainMenu-Widget. Es steuert die Logik des Widgets.<br/>
*GameOver.cpp* - ist die C++-Klasse hinter dem GameOver-Widget. Es steuert die Logik des Widgets.<br/>
*GameHud.cpp* - ist die C++-Klasse hinter dem HUD-Widget. Es steuert die Logik des HUDs.<br/>
*PauseMenu.cpp* - ist die C++-Klasse hinter dem Pausen-Menü-Widget. Es steuert die Logik des Widgets.<br/>
*ScoreTable.cpp* - ist die C++-Klasse hinter dem Highscoretabellen-Widget. Es steuert die Logik und das Verhalten des Widgets.<br/>
*ScoreTableRow.cpp* - ist die C++-Klasse hinter dem ScoreTableRow-Widget. Es ist ein Zeilen-Element der Highscoretabelle.<br/>
*CoinItem.cpp* - Klasse hinter dem Münz-Item. Steuert das Verhalten und die Interaktion des Münz-Items.</br>
*FloorTile.cpp* - Klasse für das BodenFeld Objek, worüber der Spieler läuft. Wird dynamisch vor dem Spieler erzeugt und hinter</br>
dem Spieler zerstört, um Resourcen zu sparen.<br/>
*Obstacle.cpp* - Ist für die Interaktion und das Verhalten der Hindernisse zuständig.<br/>
*RunAnimInstance.cpp* - AnimationsInstanz klasse für die Animation des Mannequins.<br/>
*RunCharacter.cpp* - Klasse hinter dem rennenden Mannequin. Ist für die Interaktion mit den Münzen, Hindernissen zuständig, sowie für Sprünge, Spurenwechsel<br/>
und Soundeffekte.<br/>
*MainMenuGameMode.cpp* - Ist eine Basisklasse für des MainMenuLevel. Die Interaktionen der Klassen dieses Levels, werden hier zusammengeführt.<br/>
*YounglingsGameModeBase.cpp* - Ist eine Basisklasse des SpielLevels. Hier werden solche Werte, wie LebensAnzahl und Score gespeichert.<br/>
Die Funktionalität des Spiels wird hier, dem Hauptknotenpunkt, zusammengeführt.

### Game Export 
Im Ordner __..\Game__ befindet sich die Spiele .exe, welche man zum Spielen ausführen muss. Es startet sich dann das Spiel.

