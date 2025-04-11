#pragma once

#include "agent.h"

/**
 * @brief Plays the guessing game with respect to an agent.
 * 
 * @param agent The agent playing the game.
 * @param wager How many coins the agent bets.
 * @return Coins earned from game.
 */
int runGame(Agent& agent, int wager);