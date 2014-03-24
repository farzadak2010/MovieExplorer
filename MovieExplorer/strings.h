// strings.h : Defines the strings to be used throughout the application.
//

#define IDS_LANGUAGENAME 1000
#define IDS_ALL 1001
#define IDS_SEARCH 1002
#define IDS_GENRES 1003
#define IDS_COUNTRIES 1004
#define IDS_RUNTIME 1005
#define IDS_CATEGORY 1006
#define IDS_DIRECTORS 1007
#define IDS_WRITERS 1008
#define IDS_STARS 1009
#define IDS_FILE 1010
#define IDS_ENTRY 1011
#define ID_TOOLS_ZOOMIN 1012
#define ID_TOOLS_ZOOMOUT 1013
#define ID_TOOLS_ZOOMRESET 1014
#define ID_TOOLS_STATUSBAR 1015
#define ID_TOOLS_LOG 1016
#define ID_TOOLS_OPTIONS 1017
#define ID_TOOLS_EXIT 1018
#define IDS_UPDATEINPROGRESS 1019
#define IDS_MOVIEUNKNOWN 1020
#define IDS_CONNECTIONERROR 1021
#define IDS_SCRAPEERROR 1022
#define IDS_AND 1023
#define IDS_VOTES 1024
#define IDS_OK 1025
#define IDS_CANCEL 1026
#define IDS_APPLY 1027
#define IDS_OPTIONS 1028
#define IDS_GENERAL 1029
#define IDS_INTERFACE 1030
#define IDS_LANGUAGE 1031
#define IDS_THEME 1032
#define IDS_SEARCHINSTANTLY 1033
#define IDS_SEARCHLITERALLY 1034
#define IDS_SEARCHSTORYLINE 1035
#define IDS_NORMALIZERATINGS 1036
#define IDS_DATABASE 1037
#define IDS_INDEXEXTENSIONS 1038
#define IDS_INDEXDIRECTORIES 1039
#define IDS_ONLYUSE 1040
#define IDS_MAXINFOAGE 1041
#define IDS_INFOSERVICE 1042
#define IDS_TITLE 1043
#define IDS_YEAR 1044
#define IDS_STORYLINE 1045
#define IDS_POSTER 1046
#define IDS_RATING 1047
#define IDS_COMBINED 1048
#define IDS_NONE 1049
#define IDS_CATEGORIES 1050
#define IDS_DIRECTORIES 1051
#define IDS_FOLDERORFILE 1052
#define IDS_ONLYAVAILABLEON 1053
#define IDS_YOUCANUSETXT 1054
#define IDS_EDITMOVIE 1055
#define IDS_IDENTIFICATION 1056
#define IDS_INFORMATION 1057
#define IDS_FILENAME 1058
#define IDS_FILESIZE 1059
#define IDS_OPTIONALPROP 1060
#define IDS_SEENMOVIE 1061
#define IDS_HIDEMOVIE 1062
#define IDS_SURETOHIDE 1063
#define IDS_SURETODELETEFILE 1064
#define IDS_SURETODELETEDIRECTORY 1065
#define IDS_FILENOTFOUND 1066
#define IDS_READY 1067
#define IDS_LOADINGDATABASE 1068
#define IDS_UPDATINGDATABASE 1069
#define IDS_SYNCINGDATABASE 1070
#define IDS_TOOLTIP_PLAY 1071
#define IDS_TOOLTIP_DIR 1072
#define IDS_TOOLTIP_SEEN 1073
#define IDS_TOOLTIP_EDIT 1074
#define IDS_TOOLTIP_HIDE 1075
#define IDS_TOOLTIP_DELETE 1076
#define IDS_TOOLTIP_TOOLS 1077
#define IDS_TOOLTIP_SEENMAIN 1078
#define IDS_TOOLTIP_SORT 1079
#define IDS_TOOLTIP_VIEW 1080
#define ID_SORT_TITLEASC 1081
#define ID_SORT_TITLEDES 1082
#define ID_SORT_YEARASC 1083
#define ID_SORT_YEARDES 1084
#define ID_SORT_RATINGASC 1085
#define ID_SORT_RATINGDES 1086
#define ID_SORT_FILETIMEASC 1087
#define ID_SORT_FILETIMEDES 1088

inline void LoadStrings()
{
	INT_PTR nLanguage;

	nLanguage = GetLangMgr()->GetLanguage(_T("English"));
	if (nLanguage == -1)
		nLanguage = GetLangMgr()->AddLanguage(_T("English"), _T("English"), _T(""));

	GetLangMgr()->SetString(nLanguage, 0, _T("English"), false);
	GetLangMgr()->SetString(nLanguage, 1, _T("All"), false);
	GetLangMgr()->SetString(nLanguage, 2, _T("Search"), false);
	GetLangMgr()->SetString(nLanguage, 3, _T("Genre"), false);
	GetLangMgr()->SetString(nLanguage, 4, _T("Country"), false);
	GetLangMgr()->SetString(nLanguage, 5, _T("Runtime"), false);
	GetLangMgr()->SetString(nLanguage, 6, _T("Category"), false);
	GetLangMgr()->SetString(nLanguage, 7, _T("Director"), false);
	GetLangMgr()->SetString(nLanguage, 8, _T("Writer"), false);
	GetLangMgr()->SetString(nLanguage, 9, _T("Stars"), false);
	GetLangMgr()->SetString(nLanguage, 10, _T("File"), false);
	GetLangMgr()->SetString(nLanguage, 11, _T("Entry"), false);
	GetLangMgr()->SetString(nLanguage, 12, _T("Zoom in\tCtrl + ScrlUp"), false);
	GetLangMgr()->SetString(nLanguage, 13, _T("Zoom out\tCtrl + ScrlDn"), false);
	GetLangMgr()->SetString(nLanguage, 14, _T("Zoom reset\tCtrl + 0"), false);
	GetLangMgr()->SetString(nLanguage, 15, _T("Status bar\tCtrl + S"), false);
	GetLangMgr()->SetString(nLanguage, 16, _T("Log\tCtrl + L"), false);
	GetLangMgr()->SetString(nLanguage, 17, _T("Options...\tCtrl + O"), false);
	GetLangMgr()->SetString(nLanguage, 18, _T("Exit\tAlt + F4"), false);
	GetLangMgr()->SetString(nLanguage, 19, _T("Please wait, movie information is being retrieved..."), false);
	GetLangMgr()->SetString(nLanguage, 20, _T("Failed to find movie in the %SERVICENAME% database, please specify ID manually."), false);
	GetLangMgr()->SetString(nLanguage, 21, _T("Unfortunately a connection error occurred while retrieving movie information."), false);
	GetLangMgr()->SetString(nLanguage, 22, _T("An error occured while scraping movie data."), false);
	GetLangMgr()->SetString(nLanguage, 23, _T("and"), false);
	GetLangMgr()->SetString(nLanguage, 24, _T("votes"), false);
	GetLangMgr()->SetString(nLanguage, 25, _T("OK"), false);
	GetLangMgr()->SetString(nLanguage, 26, _T("Cancel"), false);
	GetLangMgr()->SetString(nLanguage, 27, _T("Apply"), false);
	GetLangMgr()->SetString(nLanguage, 28, _T("Options"), false);
	GetLangMgr()->SetString(nLanguage, 29, _T("General"), false);
	GetLangMgr()->SetString(nLanguage, 30, _T("Interface"), false);
	GetLangMgr()->SetString(nLanguage, 31, _T("Language"), false);
	GetLangMgr()->SetString(nLanguage, 32, _T("Theme"), false);
	GetLangMgr()->SetString(nLanguage, 33, _T("Instantly start searching when typing in the search box"), false);
	GetLangMgr()->SetString(nLanguage, 34, _T("Search literally for input"), false);
	GetLangMgr()->SetString(nLanguage, 35, _T("Include movie storyline in search"), false);
	GetLangMgr()->SetString(nLanguage, 36, _T("Normalize ratings to scale from 1 to 10"), false);
	GetLangMgr()->SetString(nLanguage, 37, _T("Database"), false);
	GetLangMgr()->SetString(nLanguage, 38, _T("Index files with the following extensions"), false);
	GetLangMgr()->SetString(nLanguage, 39, _T("Include directories in list"), false);
	GetLangMgr()->SetString(nLanguage, 40, _T("Only use"), false);
	GetLangMgr()->SetString(nLanguage, 41, _T("Maximum movie information age (weeks)"), false);
	GetLangMgr()->SetString(nLanguage, 42, _T("Information service"), false);
	GetLangMgr()->SetString(nLanguage, 43, _T("Title"), false);
	GetLangMgr()->SetString(nLanguage, 44, _T("Year"), false);
	GetLangMgr()->SetString(nLanguage, 45, _T("Storyline"), false);
	GetLangMgr()->SetString(nLanguage, 46, _T("Poster"), false);
	GetLangMgr()->SetString(nLanguage, 47, _T("Rating"), false);
	GetLangMgr()->SetString(nLanguage, 48, _T("Combined"), false);
	GetLangMgr()->SetString(nLanguage, 49, _T("None"), false);
	GetLangMgr()->SetString(nLanguage, 50, _T("Categories"), false);
	GetLangMgr()->SetString(nLanguage, 51, _T("Directories"), false);
	GetLangMgr()->SetString(nLanguage, 52, _T("Folder/File"), false);
	GetLangMgr()->SetString(nLanguage, 53, _T("Only available on"), false);
	GetLangMgr()->SetString(nLanguage, 54, _T("Tip: You can also specify plain text files (*.txt) containing a list of movies separated by line breaks."), false);
	GetLangMgr()->SetString(nLanguage, 55, _T("Edit Movie"), false);
	GetLangMgr()->SetString(nLanguage, 56, _T("Identification"), false);
	GetLangMgr()->SetString(nLanguage, 57, _T("Information"), false);
	GetLangMgr()->SetString(nLanguage, 58, _T("File name"), false);
	GetLangMgr()->SetString(nLanguage, 59, _T("File size"), false);
	GetLangMgr()->SetString(nLanguage, 60, _T("Optional properties"), false);
	GetLangMgr()->SetString(nLanguage, 61, _T("I have seen this movie"), false);
	GetLangMgr()->SetString(nLanguage, 62, _T("Hide this movie"), false);
	GetLangMgr()->SetString(nLanguage, 63, _T("Are you sure you want to hide this movie?"), false);
	GetLangMgr()->SetString(nLanguage, 64, _T("Are you sure you want to permanently delete this file from the computer?"), false);
	GetLangMgr()->SetString(nLanguage, 65, _T("Are you sure you want to permanetly delete this directory from the computer?"), false);
	GetLangMgr()->SetString(nLanguage, 66, _T("File not found"), false);
	GetLangMgr()->SetString(nLanguage, 67, _T("Ready"), false);
	GetLangMgr()->SetString(nLanguage, 68, _T("Loading database"), false);
	GetLangMgr()->SetString(nLanguage, 69, _T("Collecting and updating movie information"), false);
	GetLangMgr()->SetString(nLanguage, 70, _T("Synchronizing with files on disk"), false);
	GetLangMgr()->SetString(nLanguage, 71, _T("Play"), false);
	GetLangMgr()->SetString(nLanguage, 72, _T("Directory"), false);
	GetLangMgr()->SetString(nLanguage, 73, _T("Watched"), false);
	GetLangMgr()->SetString(nLanguage, 74, _T("Edit"), false);
	GetLangMgr()->SetString(nLanguage, 75, _T("Hide"), false);
	GetLangMgr()->SetString(nLanguage, 76, _T("Delete"), false);
	GetLangMgr()->SetString(nLanguage, 77, _T("Preferences"), false);
	GetLangMgr()->SetString(nLanguage, 78, _T("Show/Hide Watched"), false);
	GetLangMgr()->SetString(nLanguage, 79, _T("Sort"), false);
	GetLangMgr()->SetString(nLanguage, 80, _T("Switch View"), false);
	GetLangMgr()->SetString(nLanguage, 81, _T("Title"), false);
	GetLangMgr()->SetString(nLanguage, 82, _T("Title (descending)"), false);
	GetLangMgr()->SetString(nLanguage, 83, _T("Year"), false);
	GetLangMgr()->SetString(nLanguage, 84, _T("Year (descending)"), false);
	GetLangMgr()->SetString(nLanguage, 85, _T("Rating"), false);
	GetLangMgr()->SetString(nLanguage, 86, _T("Rating (descending)"), false);
	GetLangMgr()->SetString(nLanguage, 87, _T("File time"), false);
	GetLangMgr()->SetString(nLanguage, 88, _T("File time (descending)"), false);

	nLanguage = GetLangMgr()->GetLanguage(_T("Dutch"));
	if (nLanguage == -1)
		nLanguage = GetLangMgr()->AddLanguage(_T("Dutch"), _T("Nederlands"), _T(""));

	GetLangMgr()->SetString(nLanguage, 0, _T("Nederlands"), false);
	GetLangMgr()->SetString(nLanguage, 1, _T("Alles"), false);
	GetLangMgr()->SetString(nLanguage, 2, _T("Zoeken"), false);
	GetLangMgr()->SetString(nLanguage, 3, _T("Genre"), false);
	GetLangMgr()->SetString(nLanguage, 4, _T("Land"), false);
	GetLangMgr()->SetString(nLanguage, 5, _T("Speelduur"), false);
	GetLangMgr()->SetString(nLanguage, 6, _T("Categorie"), false);
	GetLangMgr()->SetString(nLanguage, 7, _T("Regisseur"), false);
	GetLangMgr()->SetString(nLanguage, 8, _T("Schrijver"), false);
	GetLangMgr()->SetString(nLanguage, 9, _T("Cast"), false);
	GetLangMgr()->SetString(nLanguage, 10, _T("Bestand"), false);
	GetLangMgr()->SetString(nLanguage, 11, _T("Vermelding"), false);
	GetLangMgr()->SetString(nLanguage, 12, _T("Zoom in\tCtrl + ScrlUp"), false);
	GetLangMgr()->SetString(nLanguage, 13, _T("Zoom uit\tCtrl + ScrlDn"), false);
	GetLangMgr()->SetString(nLanguage, 14, _T("Zoom herstel\tCtrl + 0"), false);
	GetLangMgr()->SetString(nLanguage, 15, _T("Statusbalk\tCtrl + S"), false);
	GetLangMgr()->SetString(nLanguage, 16, _T("Log\tCtrl + L"), false);
	GetLangMgr()->SetString(nLanguage, 17, _T("Opties...\tCtrl + O"), false);
	GetLangMgr()->SetString(nLanguage, 18, _T("Sluiten\tAlt + F4"), false);
	GetLangMgr()->SetString(nLanguage, 19, _T("Een ogenblik geduld, filminformatie wordt opgehaald..."), false);
	GetLangMgr()->SetString(nLanguage, 20, _T("De film werd niet gevonden in de %SERVICENAME% database, u dient de ID handmatig op te geven."), false);
	GetLangMgr()->SetString(nLanguage, 21, _T("Er is helaas een verbindingsfout opgetreden bij het ophalen van de filminformatie."), false);
	GetLangMgr()->SetString(nLanguage, 22, _T("Er is een error opgetreden bij het lezen van de film data."), false);
	GetLangMgr()->SetString(nLanguage, 23, _T("en"), false);
	GetLangMgr()->SetString(nLanguage, 24, _T("stemmen"), false);
	GetLangMgr()->SetString(nLanguage, 25, _T("OK"), false);
	GetLangMgr()->SetString(nLanguage, 26, _T("Annuleren"), false);
	GetLangMgr()->SetString(nLanguage, 27, _T("Toepassen"), false);
	GetLangMgr()->SetString(nLanguage, 28, _T("Opties"), false);
	GetLangMgr()->SetString(nLanguage, 29, _T("Algemeen"), false);
	GetLangMgr()->SetString(nLanguage, 30, _T("Interface"), false);
	GetLangMgr()->SetString(nLanguage, 31, _T("Taal"), false);
	GetLangMgr()->SetString(nLanguage, 32, _T("Thema"), false);
	GetLangMgr()->SetString(nLanguage, 33, _T("Direct zoeken tijdens het typen in het invoervak"), false);
	GetLangMgr()->SetString(nLanguage, 34, _T("Zoek letterlijk naar invoer"), false);
	GetLangMgr()->SetString(nLanguage, 35, _T("Doorzoek ook het plot van de film"), false);
	GetLangMgr()->SetString(nLanguage, 36, _T("Normaliseer beoordelingen naar schaal van 1 tot 10"), false);
	GetLangMgr()->SetString(nLanguage, 37, _T("Database"), false);
	GetLangMgr()->SetString(nLanguage, 38, _T("Indexeer bestanden met de volgende extensies"), false);
	GetLangMgr()->SetString(nLanguage, 39, _T("Voeg mappen ook toe aan lijst"), false);
	GetLangMgr()->SetString(nLanguage, 40, _T("Gebruik alleen"), false);
	GetLangMgr()->SetString(nLanguage, 41, _T("Maximale filminformatie leeftijd (weken)"), false);
	GetLangMgr()->SetString(nLanguage, 42, _T("Informatie service"), false);
	GetLangMgr()->SetString(nLanguage, 43, _T("Titel"), false);
	GetLangMgr()->SetString(nLanguage, 44, _T("Jaar"), false);
	GetLangMgr()->SetString(nLanguage, 45, _T("Plot"), false);
	GetLangMgr()->SetString(nLanguage, 46, _T("Poster"), false);
	GetLangMgr()->SetString(nLanguage, 47, _T("Beoordeling"), false);
	GetLangMgr()->SetString(nLanguage, 48, _T("Gecombineerd"), false);
	GetLangMgr()->SetString(nLanguage, 49, _T("Geen"), false);
	GetLangMgr()->SetString(nLanguage, 50, _T("CategorieŽn"), false);
	GetLangMgr()->SetString(nLanguage, 51, _T("Mappen"), false);
	GetLangMgr()->SetString(nLanguage, 52, _T("Map/Bestand"), false);
	GetLangMgr()->SetString(nLanguage, 53, _T("Alleen beschikbaar op"), false);
	GetLangMgr()->SetString(nLanguage, 54, _T("Tip: U kunt ook platte tekstbestanden (*.txt) met daarin een lijst van films gescheiden door regeleinden opgeven."), false);
	GetLangMgr()->SetString(nLanguage, 55, _T("Wijzig Film"), false);
	GetLangMgr()->SetString(nLanguage, 56, _T("Identificatie"), false);
	GetLangMgr()->SetString(nLanguage, 57, _T("Informatie"), false);
	GetLangMgr()->SetString(nLanguage, 58, _T("Bestandsnaam"), false);
	GetLangMgr()->SetString(nLanguage, 59, _T("Bestandsgrootte"), false);
	GetLangMgr()->SetString(nLanguage, 60, _T("Optionele eigenschappen"), false);
	GetLangMgr()->SetString(nLanguage, 61, _T("Ik heb deze film gezien"), false);
	GetLangMgr()->SetString(nLanguage, 62, _T("Verberg deze film "), false);
	GetLangMgr()->SetString(nLanguage, 63, _T("Weet u zeker dat u deze film wilt verbergen?"), false);
	GetLangMgr()->SetString(nLanguage, 64, _T("Weet u zeker dat u dit bestand van de computer permanent wilt verwijderen?"), false);
	GetLangMgr()->SetString(nLanguage, 65, _T("Weet u zeker dat u deze map van de computer permanent wilt verwijderen?"), false);
	GetLangMgr()->SetString(nLanguage, 66, _T("Bestand niet gevonden"), false);
	GetLangMgr()->SetString(nLanguage, 67, _T("Klaar"), false);
	GetLangMgr()->SetString(nLanguage, 68, _T("Laden van database"), false);
	GetLangMgr()->SetString(nLanguage, 69, _T("Bezig met opzoeken en updaten van film informatie"), false);
	GetLangMgr()->SetString(nLanguage, 70, _T("Synchroniseren met de bestanden op de schijf"), false);
	GetLangMgr()->SetString(nLanguage, 71, _T("Speel"), false);
	GetLangMgr()->SetString(nLanguage, 72, _T("Directory"), false);
	GetLangMgr()->SetString(nLanguage, 73, _T("Keek"), false);
	GetLangMgr()->SetString(nLanguage, 74, _T("Bewerk"), false);
	GetLangMgr()->SetString(nLanguage, 75, _T("Verberg"), false);
	GetLangMgr()->SetString(nLanguage, 76, _T("Verwijder"), false);
	GetLangMgr()->SetString(nLanguage, 77, _T("Voorkeuren"), false);
	GetLangMgr()->SetString(nLanguage, 78, _T("Weergeven/Verbergen Bekeken"), false);
	GetLangMgr()->SetString(nLanguage, 79, _T("Sorteer"), false);
	GetLangMgr()->SetString(nLanguage, 80, _T("Schakelen Scherm"), false);
	GetLangMgr()->SetString(nLanguage, 81, _T("Titel"), false);
	GetLangMgr()->SetString(nLanguage, 82, _T("Titel (aflopend)"), false);
	GetLangMgr()->SetString(nLanguage, 83, _T("Jaar"), false);
	GetLangMgr()->SetString(nLanguage, 84, _T("Jaar (aflopend)"), false);
	GetLangMgr()->SetString(nLanguage, 85, _T("Beoordeling"), false);
	GetLangMgr()->SetString(nLanguage, 86, _T("Beoordeling (aflopend)"), false);
	GetLangMgr()->SetString(nLanguage, 87, _T("Bestandstijd"), false);
	GetLangMgr()->SetString(nLanguage, 88, _T("Bestandstijd (aflopend)"), false);
}
