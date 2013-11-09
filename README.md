Dragon Age Plugin for Proelia
=======================

A Proelia plugin to support the Dragon Age game system. This plugin is meant as a template 
for anyone who wishes to create a game system plugin for Proelia 2.1.


Building
---

This plugin should be built using Xcode 4, using the 10.7 or 10.8 SDK.

The following changes must be made for your game system plugin:

1. You will probably want to rename the project directories to represent your plugin name,
but this is not strictly necessary.
2. In the ConditionProvider .m and .h files, change the name of your condition provider
class. For example, "DragonAgeConditionProvider" becomes "AwesomeRPGConditionProvider".
3. In the GameSystem .m and .h files, change the name of your game system class.
4. Also in the GameSystem .m file, change the string values returned in the -name, -label,
and -shortLabel methods. "name" is an identifier, and should be lowercase. "label" and "shortLabel"
are just descriptive strings.
5. Edit the contents of the other methods for conditions, ordering, events, and health.
6. You will probably also want to edit the list of conditions in the ConditionProvider 
class so that they represent your game system. If the game system doesn't have any, or they
don't make sense, then just provide empty arrays. Most of the condition provider methods at
the bottom of that file can be left alone, except for -additionalConditionNamesForParticipant,
which is used to determine what conditions should be automatically applied to a particular
encounter participant, say, based on health values or whatever else.

Installing
---

In order to use the plugin, you must install it in the application's plugins folder. This
folder is located inside the application bundle. To get to the plugins folder, do the
following:

1. Right-click (or command-click) the Proelia 2 application icon, and select "Show 
Package Contents".
2. Open the following folders: "Contents", then "PlugIns".
3. Copy the plugin bundle, for example, "DragonAgeGameSystem.proeliaplugin", from wherever
it was built into the "PlugIns" folder.
4. Restart Proelia. The plugin's game system should now appear in the list of game systems
when you create or edit an encounter.
