#include <iostream>
#include <vector>

using namespace std;

#include "EngineStd.h"

#include "GameAsset.h"
#include "GameAssetRules.h"

// constructor - initialize set default
GameAssetRules::GameAssetRules(Context *context)
:Object(context)
{
}

// deconstructor
GameAssetRules::~GameAssetRules()
{
    return;
}
