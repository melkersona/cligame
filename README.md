# cligame
In theory, my goal is to create a game engine that abstracts so heavily an English major can print a whole game.
I/O will be abstracted to the point you can draw basic curses style graphics, all the way up to 3D scenes.
Content will be served in the form of human readable scripts formatted like whatever kind of standard might exist for a screenplay, serving dialog, actor/fx/camera cues, and mechanical data only if necessary.
Intent is that with enough work "compiling" a script into a more complex game file, even a simple generator of such scripts would be able to provide procedural, if linear, content.
Scripts need to support interconnected loops, an ideal format being a loose collection of events that will happen when conditions are met, only intended to meet the bar of a classic JRPG- for example, generate [macguffin objects/keys/crystals/holy raiment/gym badges] and distribute them in the world, create obstacles around players retrieving the objects [traps, bosses, puzzles].
Ideally automatic output of simple scripts would be easily editable to create more robust adventures, and in an open source manner adventures will be able to access a respository of customized worlds, puzzles, adventures, enemies, etc. to make it a collaborative effort to create play experiences, and increase the average quality of said experiences.
If abstracted well enough, you should be able to create a world much like the Kanto region, and load an adventure into it that feels more like Legend of Zelda, or vice versa with a Hyrulian party JRPG.
I am imagining meta progression on the player's side, exposing a lore-built for their character to explore various worlds and narratives, and tie it all together into one progression where exploring new user & dev submitted content feels rewarding long term.

Just a *little* ambitious. 

Program when built will dynamically load files to describe content of a story, which the game will then tell.
Proposed format for game files:
A manifest file to describe which files the engine needs to care of (Is this necessary? Can we just assume all files are good to read?)
	How else to define the entry point for game files? Predefined main script file?
A collection of scripts, the only hard required type will be text that will be printed, making the "game" just a linear novel to read by players.
Other types: 
	Characters
		Name
		Interactions with player (Fight? talk?)
		Stats?
	Locations
		Characters and objects present
		Music to play when player is in location
	Items
		Stats?
		Use effects?
		Key-usage?
	(World) Objects
		Interactions with player, does stepping into it do something? Does interacting with it do something?
		World properties (Can walk through or blocking?)
