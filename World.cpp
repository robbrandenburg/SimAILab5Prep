

void World::InitializeValidCoinSpawns{
	for (int y = minY; y < maxY; y += COIN_GRID_HEIGHT) {
		for (int x = minX; x < maxX; x += COIN_GRID_WIDTH) {			
			glm::vec2 spawnPos(x, y);
			//TODO: check for things like obstacles
			if (this->IsValidCoinSpawn(x, y)) {
				this->validCoinSpawns.push_back(spawnPos);
			}
		}
	}
}

void World::AddRandomCoin() {
	//TODO: when removing a coin from the world, add it back to valid spawn positions
	//TODO: might need to temporarily filter valid positions so coin doesn't spawn too close to an agent
	int spawnIndex = Random(0, this->validCoinSpawns.length);
	glm::vec2 spawnPos = this->validCoinSpawns[spawnIndex];
	Coin* coin = new Coin(spawnPos);
	RemoveCoinSpawnPos(spawnPos);
	// need to add to stored list of coins?
}