#pragma once

#include "effect.h"
#include <set>
#include <map>

Entity SpawnObject(Hash model);

float GetDistance3D(Vector3 a, Vector3 b);

class EffectSpawnHotchkissCannon : public Effect
{
public:
	EffectSpawnHotchkissCannon()
	{
		ID = "spawn_hotchkiss_cannon";
		name = "Spawn Hotchkiss cannon";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectTeleportEverything : public Effect
{
public:
	EffectTeleportEverything()
	{
		ID = "teleport_everyithing";
		name = "Teleport Everything To Player";
		bTimed = true;
		EffectDuration = 25;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;

private:
	std::vector <Entity> props;
	std::vector <Vector3> oldPropsCoords;
};


class EffectSnowstorm : public Effect
{
public:
	EffectSnowstorm()
	{
		ID = "snowstorm";
		name = "Snowstorm";
		bTimed = true;
		EffectDuration = 45;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
};


class EffectThunderstorm : public Effect
{
public:
	EffectThunderstorm()
	{
		ID = "thunderstorm";
		name = "Thunderstorm";
		bTimed = true;
		EffectDuration = 45;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
};

class EffectGiantPeds : public Effect
{
public:
	EffectGiantPeds()
	{
		ID = "giant_peds";
		name = "All Peds Are Giants";
		bTimed = true;
		EffectDuration = 45;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;
	
	void SetScale(float scale);

private:
	std::set <Ped> giantPeds;
};

class EffectAllPedsWannaKillPlayer : public Effect
{
public:
	EffectAllPedsWannaKillPlayer()
	{
		ID = "peds_wanna_kill_player";
		name = "Peds Wanna Kill Player";
		bTimed = true;
		EffectDuration = 25;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;
};


class EffectRagdollEveryone : public Effect
{
public:
	EffectRagdollEveryone()
	{
		ID = "ragdoll_everyone";
		name = "Ragdoll Everyone";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectLaunchPedsUp : public Effect
{
public:
	EffectLaunchPedsUp()
	{
		ID = "launch_peds_up";
		name = "Launch Nearby Peds Up";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectInvertedGravity : public Effect
{
public:
	EffectInvertedGravity()
	{
		ID = "inverted_gravity";
		name = "Inverted Gravity";
		bTimed = true;
		EffectDuration = 10;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;

	virtual void OnDeactivate() override;

private:
	
	std::set <Entity> entities;
};

class EffectDoomsday : public Effect
{
public:
	EffectDoomsday()
	{
		ID = "doomsday";
		name = "Doomsday";
		bTimed = true;
		EffectDuration = 20;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;

private:
	Vector3 randomDirection;
	
	std::set <Entity> entities;
};

class EffectPlayIntro : public Effect
{
public:
	EffectPlayIntro()
	{
		ID = "play_intro";
		name = "Play Game Intro";
		bTimed = true;
		EffectDuration = 25;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
};

class EffectSetTimeMorning : public Effect
{
public:
	EffectSetTimeMorning()
	{
		ID = "set_time_morning";
		name = "Set Time to Morning";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectSetTimeNight : public Effect
{
public:
	EffectSetTimeNight()
	{
		ID = "set_time_night";
		name = "Set Time to Night";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectSetRandomTime : public Effect
{
public:
	EffectSetRandomTime()
	{
		ID = "set_random_time";
		name = "Set Random Time of Day";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectSetRandomWeather : public Effect
{
public:
	EffectSetRandomWeather()
	{
		ID = "set_random_weather";
		name = "Set Random Weather";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectSetSunnyWeather : public Effect
{
public:
	EffectSetSunnyWeather()
	{
		ID = "set_sunny_weather";
		name = "Set Sunny Weather";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectSetRainyWeather : public Effect
{
public:
	EffectSetRainyWeather()
	{
		ID = "set_rainy_weather";
		name = "Set Rainy Weather";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectSetRapidWeather : public Effect
{
public:
	EffectSetRapidWeather()
	{
		ID = "rapid_weather";
		name = "Rapid Weather Changing";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;
};

class EffectEarthquake : public Effect
{
public:
	EffectEarthquake()
	{
		ID = "darthquake";
		name = "Earthquake";
		bTimed = true;
		EffectDuration = 25;
	}
	
	virtual void OnTick() override;

private:
	
	std::set <Entity> entities;
};

class EffectEveryoneIsInvincible : public Effect
{
public:
	EffectEveryoneIsInvincible()
	{
		ID = "invincible_everyone";
		name = "Everyone is Invincible";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;

private:
	
	std::set <Entity> entities;
};

/** Original code by ChaosModV contributors */
class Effect120FOV : public Effect
{
public:
	Effect120FOV()
	{
		ID = "fov_120";
		name = "FOV 120";
		bTimed = true;
		EffectDuration = 15;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;

private:
	Camera cam;
};

class EffectIgniteNearbyPeds : public Effect
{
public:
	EffectIgniteNearbyPeds()
	{
		ID = "ignite_nearby_peds";
		name = "Ignite Nearby Peds";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectLightningOnce : public Effect
{
public:
	EffectLightningOnce()
	{
		ID = "lightning_once";
		name = "Lightning In a Few Meters";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectLightningEnemy : public Effect
{
public:
	EffectLightningEnemy()
	{
		ID = "lightning_enemy";
		name = "Kill Enemy with Lightning";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectAltTab : public Effect
{
public:
	EffectAltTab()
	{
		ID = "alt_tab";
		name = "Alt + Tab";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectRemoveWeaponFromEveryone : public Effect
{
public:
	EffectRemoveWeaponFromEveryone()
	{
		ID = "remove_weapons_everyone";
		name = "Remove Weapons From Everyone";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectSetFoggyWeather : public Effect
{
public:
	EffectSetFoggyWeather()
	{
		ID = "set_foggy_weather";
		name = "Set Foggy Weather";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};


class EffectGhostTown : public Effect
{
public:
	EffectGhostTown()
	{
		ID = "ghost_town";
		name = "Ghost Town";
		bTimed = true;
		EffectDuration = 20;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;

private:
	std::set <Entity> entities;
};


class EffectSpawnUFO : public Effect
{
public:
	EffectSpawnUFO()
	{
		ID = "spawn_ufo";
		name = "Spawn UFO";
		bTimed = true;
		EffectDuration = 25;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;
	
	virtual void OnDeactivate() override;

private:
	Object ufo;
	float heading = 0.0f;
	uint32_t movesCount = 0;
};

class EffectGravityField : public Effect
{
public:
	EffectGravityField()
	{
		ID = "gravity_field";
		name = "Gravity Field";
		bTimed = true;
		EffectDuration = 20;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;

private:
	std::set <Entity> entities;
};


struct EntityVelocity
{
	Entity entity;
	Vector3 velocity;
	uint32_t maxTick = 0;
};

class EffectPigWeapons : public Effect
{
public:
	EffectPigWeapons()
	{
		ID = "pig_weapons";
		name = "Pig Weapons";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;

private:
	std::set <Ped> peds;
	
	std::set <Ped> pigs;
	
	std::vector <EntityVelocity> pigsVelocity;
};

class IEffectGamespeed : public Effect
{
public:
	
	IEffectGamespeed()
	{
		bTimed = true;
		EffectDuration = 25;
	}
	
	float timeToSet = 1.0f;
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
};


class EffectGamespeedx02 : public IEffectGamespeed
{
public:
	
	EffectGamespeedx02()
	{
		ID = "gamespeed_02";
		name = "x0.2 Gamespeed";
		timeToSet = 0.2f;
		
	}
};

class EffectGamespeedx05 : public IEffectGamespeed
{
public:
	
	EffectGamespeedx05()
	{
		ID = "gamespeed_05";
		name = "x0.5 Gamespeed";
		timeToSet = 0.5f;
		
	}
};

class EffectRainingPigs : public Effect
{
public:
	
	EffectRainingPigs()
	{
		ID = "raining_pigs";
		name = "It's Raining Pigs";
		bTimed = true;
		EffectDuration = 25;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;
	
	virtual void OnDeactivate() override;

private:
	std::vector <Ped> pigs;
};

class EffectRainbow : public Effect
{
public:
	EffectRainbow()
	{
		ID = "rainbow";
		name = "Rainbow In The Sky";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
};

class EffectGiveEveryoneRifle : public Effect
{
public:
	EffectGiveEveryoneRifle()
	{
		ID = "give_everyone_rifle";
		name = "Give Everyone A Rifle";
		bTimed = false;
	}
	
	virtual void OnActivate() override;
};

class EffectTimelapse : public Effect
{
public:
	EffectTimelapse()
	{
		ID = "timelapse";
		name = "Timelapse";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;
	
	virtual void OnDeactivate() override;

private:
	float totalSeconds = 0;
};

class EffectNoHUD : public Effect
{
public:
	EffectNoHUD()
	{
		ID = "no_hud";
		name = "No HUD";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnTick() override;
};

class EffectInsaneGravity : public Effect
{
public:
	EffectInsaneGravity()
	{
		ID = "insane_gravity";
		name = "Insane Gravity";
		bTimed = true;
		EffectDuration = 20;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;

private:
	
	std::set <Entity> entities;
};

class EffectUpsideDownCamera : public Effect
{
public:
	EffectUpsideDownCamera()
	{
		ID = "upside_down_camera";
		name = "Upside Down Camera";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnDeactivate() override;
	
	virtual void OnTick() override;

private:
	Camera cam;
};


class EffectOneHitKO : public Effect
{
public:
	EffectOneHitKO()
	{
		ID = "one_hit_ko";
		name = "One Hit KO";
		bTimed = true;
		EffectDuration = 30;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;
	
	virtual void OnDeactivate() override;

private:
	std::set <Ped> peds;
};

class EffectShadesOfGray : public Effect
{
public:
	EffectShadesOfGray()
	{
		ID = "shades_of_gray";
		name = "Shades Of Gray";
		bTimed = true;
		EffectDuration = 20;
	}
	
	virtual void OnTick() override;
	
	virtual void OnDeactivate() override;
};

class EffectPotatoMode : public Effect
{
public:
	EffectPotatoMode()
	{
		ID = "potato_mode";
		name = "Potato Mode";
		bTimed = true;
		EffectDuration = 25;
	}
	
	virtual void OnActivate() override;
	
	virtual void OnTick() override;
	
	virtual void OnDeactivate() override;

private:
	std::set <Ped> peds;
};

class EffectChaosRain : public Effect
{
public:
	EffectChaosRain()
	{
		ID = "chaos_rain";
		name = "Chaos Rain";
		bTimed = true;
		EffectDuration = 30;
	}

	virtual void OnActivate() override;

	virtual void OnTick() override;

	virtual void OnDeactivate() override;

private:
	std::vector<Ped> peds;
	std::vector<Vehicle> vehs;
};

class EffectSetFroggyWeather : public Effect
{
public:
	EffectSetFroggyWeather()
	{
		ID = "set_froggy_weather";
		name = "Set Froggy Weather";
		bTimed = true;
		EffectDuration = 30;
	}

	virtual void OnActivate() override;

	virtual void OnTick() override;

	virtual void OnDeactivate() override;

private:
	std::vector<Ped> peds;
};

class EffectSlowWorldFor5Seconds : public Effect
{
public:
	EffectSlowWorldFor5Seconds()
	{
		ID = "slow_world_for_5_seconds";
		name = "Slow Everything To A Crawl";
		bTimed = true;
		EffectDuration = 5;
	}

	virtual void OnActivate() override;

	virtual void OnDeactivate() override;

private:
	std::set<Ped> frozenPeds = {};
};

class EffectOldWestNoir : public Effect
{
public:
	EffectOldWestNoir()
	{
		ID = "old_west_noir";
		name = "Old West Noir";
		bTimed = true;
		EffectDuration = 90;
	}

	virtual void OnActivate() override;

	virtual void OnTick() override;
	
	virtual void OnDeactivate() override;

private:
	const char* oldNoirFilter = "PhotoMode_FilterModern07";

	const float lerpSpeed = 0.0005f;
	
	float oldWestNoirStrength = 0.0f;	
};

class EffectRandomGravity : public Effect
{
public:
	EffectRandomGravity()
	{
		ID = "random_gravity";
		name = "Random Gravity";
		bTimed = true;
		EffectDuration = 20;
		currentGravity = 0;
	}

	virtual void OnActivate() override;

	virtual void OnTick() override;

private:
	// For now it's just 6 directions of gravity.
	std::vector<Vector3> gravity = {{50.0f,0.0f,0.0f}, {0.0f,50.0f,0.0f}, {0.0f,0.0f,50.0f},
		{-50.0f,0.0f,0.0f}, {0.0f,-50.0f,0.0f}, {0.0f,0.0f,-50.0f}};
	std::set <Entity> entities;
	int currentGravity;
};

class EffectTreeHugger : public Effect
{
public :
	EffectTreeHugger()
	{
		ID = "tree_hugger";
		name = "Tree Hugger";
		bTimed = true;
		EffectDuration = 10;
	}

	virtual void OnActivate() override;

	virtual void OnDeactivate() override;

private:
	Object spawnedTree;

	char* hugAnimDict = (char*) "script_re@campfire_massacre";
	char* hugAnimName = (char*) "hug_man";
};

class EffectReplaceEnemiesWithFish : public Effect
{
public:
	EffectReplaceEnemiesWithFish()
	{
		ID = "turn_all_enemies_into_fish";
		name = "You sir, are a fish.";
		bTimed = false;
	}

	virtual void OnActivate() override;
};

class EffectUTurn : public Effect
{
public:
	EffectUTurn()
	{
		ID = "uturn";
		name = "U Turn";
		bTimed = false;
	}

	virtual void OnActivate() override;
};

class EffectNoGravity : public Effect
{
public:
	EffectNoGravity()
	{
		ID = "no_gravity";
		name = "No Gravity";
		bTimed = true;
		EffectDuration = 20;
	}

	virtual void OnActivate() override;
	virtual void OnTick() override;
	virtual void OnDeactivate() override;

private:
	std::set <Entity> entities;
};

class EffectFencedIn : public Effect
{
public:
	EffectFencedIn()
	{
		ID = "fenced_in";
		name = "Fenced In";
		bTimed = true;
		EffectDuration = 10;
	}

	virtual void OnActivate() override;
	virtual void OnDeactivate() override;

private:
	std::set<Entity> spawnedFences;
};

class EffectWKeyStuck : public Effect
{
public:
	EffectWKeyStuck()
	{
		ID = "w_key_stuck";
		name = "Help, my W key is stuck!";
		bTimed = true;
		EffectDuration = 30;
	}

	virtual void OnTick() override;
};

/** Meta */

class MetaEffectTotalChaos : public MetaEffect
{
public:
	MetaEffectTotalChaos()
	{
		ID = "total_chaos";
		name = "Total Chaos";
		EffectDuration = 180;
	}
};


class MetaEffectComboTime : public MetaEffect
{
public:
	MetaEffectComboTime()
	{
		ID = "combo_time";
		name = "Combo Time";
		EffectDuration = 180;
	}
};

class MetaEffectDoubleSubs : public MetaEffect
{
public:
	MetaEffectDoubleSubs()
	{
		ID = "double_subs";
		name = "Double Subs";
		EffectDuration = 180;
	}
};

class MetaEffectCanoeTime : public MetaEffect
{
public:
	MetaEffectCanoeTime()
	{
		ID = "canoe_time";
		name = "Canoe Time";
		EffectDuration = 180;
	}

	virtual void OnActivate() override;
	virtual void OnDeactivate() override;

	virtual void OnTick() override;

private:
	std::vector<Vehicle> canoes;
};


std::vector <Entity> GetNearbyProps(int32_t Max);

void PlayAmbientSpeech(const char* voiceDict, const char* voiceSpeech, Ped ped, uint32_t speechID = 0,
					   bool bSetEntity = false);

Vector3 GetRandomCoordInRange(Vector3 vec, float distance);

Vector3 GetRandomCoordAroundPlayer(float distance, bool bUseVelocity = true);