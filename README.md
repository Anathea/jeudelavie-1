#Le jeu de la vie

##GIT

###Configuration
.gitignore est configuré pour ignorer les fichiers générés par Eclipse et NEtBeans (.classpath, .metadata, ...).

###Utilisation de Git :
Se familiariser avec les commandes de base :
status, add, commit, pull, push

Après avoir installé le client GitHub, vous devez vous créer un répertoire local dans le quel vous mettrez tous les fichiers du projet.
En suite, passez en mode console et effectuez cette commande pour cloner le dépot distant avec votre répertoire local :
`git clone https://github.com/roipoussiere/jeudelavie.git votre_repertoire`

###Commandes de base

Ensuite, à chaque fois que vous travaillez et que vous voulez envoyer vos fichiers sur le dépot, il faudra effectuer ces commandes :

* Si c'est pas fait, on se place dans le repertoire git local :
cd votre_repertoire_git
* On regarde quels sont les fichiers qui ont été modifiés :
git status
* Eventuellement on ajoute des fichiers au dépot (si on en a crée) :
git add le_fichier
* On commite les fichiers pour dire à Git qu'il faut versionner les fichiers que vous avez modifié :
git commit -a -m "Message pour décrire la modification effectuée"
* On récupère les fichiers présents sur le dépot pour avoir tout à jour :
git pull
* On envoie les fichiers locaux vers le dépot github :
git push

##Configuration d'Eclipse

###Workspace
Travaillez sur celui du projet (le dossier src du dépot), pas sur votre workspace perso!!

###Pour que les caractères soient en utf-8
-> Window, General, Workspace, Text file encoding : UTF-8

###Pour la javadoc
Project, Generate Javadoc..., sélectionner le programme javadoc.

##Javadoc

Pour ne pas s'embéter à rédiger la documentation, nous allons de la demander à Eclipse de la générer.
Pour cela, il faut insérer des commentaires petit à petit dans le code, avant chaque classe et chaque méthode.
Il faut placer ces commentaires juste au dessus de la classe ou méthode à commenter.
Il existe des tags qui seront compréhensibles par la javadoc, ils commencent par '@'.

###Cela doit ressembler à ça :

`/**`

`Description de la methode.<br/>`

`Il est necessaire d'insérer les '<br/>' pour faire plusieurs lignes.`

`@author Votre nom et prénom (si la classe a été réalisée à plusieurs, mettre tous les noms, séparés par une virgule). On ne peut placer ce tag que sur une classe (pas sur une méthode).`

`@param _chaine Description du 1er parametre.`

`@param _i Description du 2eme parametre.`

`@return Description de la valeur de retour.`

`@see package.Classe#methodeInteresante()`

`*/`

`public Methode (String _chaine, int _i)`

`{...`

###Pour générer la javadoc : Project, Generate Javadoc... , comme vu plus haut.

##Généralités sur le code

###Respect du modèle MVC.
Toutes les actions seront traitées dans le controleur.
On créera une nouvelle classe dans un nouveau fichier pour chaque écouteur.

###Normalisation du code

* Les noms des arguments d'une méthodes seront précédés par un '_' pour les différencier des variables déclarées dans la méthode.

ex: `public Methode (String _chaine, int _i)`

* Les accolades seront toujours sur une nouvelle ligne
ex:

`public Methode () { ... }`

* Les arguments de la classe seront toujours appelés par this
ex:

`this.bouton = new JButton ("Bouton");`


== Instruction Git ==

Suivre la branche dev : git checkout -b dev origin/dev
