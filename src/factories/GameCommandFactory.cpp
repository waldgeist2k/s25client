// Copyright (c) 2005 - 2015 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.

#include "defines.h"
#include "GameCommandFactory.h"
#include "GameCommands.h"

class GameClient;
class AIInterface;

template<class T_Handler>
bool GameCommandFactory<T_Handler>::SetFlag(const MapPoint pt)
{
    return AddGC_Virt( new gc::SetFlag(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::DestroyFlag(const MapPoint pt)
{
    return AddGC_Virt( new gc::DestroyFlag(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::BuildRoad(const MapPoint pt, const bool boat_road, const std::vector<unsigned char>& route)
{
    return AddGC_Virt( new gc::BuildRoad(pt, boat_road, route) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::DestroyRoad(const MapPoint pt, const unsigned char start_dir)
{
    return AddGC_Virt( new gc::DestroyRoad(pt, start_dir) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::UpgradeRoad(const MapPoint pt, const unsigned char start_dir)
{
    return AddGC_Virt( new gc::UpgradeRoad(pt, start_dir) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeDistribution(const std::vector<unsigned char>& data)
{
    return AddGC_Virt( new gc::ChangeDistribution(data) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeBuildOrder(const unsigned char order_type, const std::vector<unsigned char>& data)
{
    return AddGC_Virt( new gc::ChangeBuildOrder(order_type, data) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::SetBuildingSite(const MapPoint pt, const BuildingType bt)
{
    return AddGC_Virt( new gc::SetBuildingSite(pt, bt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::DestroyBuilding(const MapPoint pt)
{
    return AddGC_Virt( new gc::DestroyBuilding(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::SendSoldiersHome(const MapPoint pt)
{
    return AddGC_Virt( new gc::SendSoldiersHome(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::OrderNewSoldiers(const MapPoint pt)
{
    return AddGC_Virt( new gc::OrderNewSoldiers(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeTransport(const std::vector<unsigned char>& data)
{
    return AddGC_Virt( new gc::ChangeTransport(data) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeMilitary(const std::vector<unsigned char>& data)
{
    return AddGC_Virt( new gc::ChangeMilitary(data) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeTools(const std::vector<unsigned char>& data, signed char* order_delta = 0)
{
    return AddGC_Virt( new gc::ChangeTools(data, order_delta) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::CallGeologist(const MapPoint pt)
{
    return AddGC_Virt( new gc::CallGeologist(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::CallScout(const MapPoint pt)
{
    return AddGC_Virt( new gc::CallScout(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::Attack(const MapPoint pt, const unsigned soldiers_count, const bool strong_soldiers)
{
    return AddGC_Virt( new gc::Attack(pt, soldiers_count, strong_soldiers) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::SeaAttack(const MapPoint pt, const unsigned soldiers_count, const bool strong_soldiers)
{
    return AddGC_Virt( new gc::SeaAttack(pt, soldiers_count, strong_soldiers) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::SwitchPlayer(const unsigned char new_player_id)
{
    return AddGC_Virt( new gc::SwitchPlayer(new_player_id) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ToggleCoins(const MapPoint pt)
{
    return AddGC_Virt( new gc::ToggleCoins(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ToggleProduction(const MapPoint pt)
{
    return AddGC_Virt( new gc::ToggleProduction(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::NotifyAlliesOfLocation(const MapPoint pt)
{
    return AddGC_Virt( new gc::NotifyAlliesOfLocation(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeInventorySetting(const MapPoint pt, const unsigned char category, const unsigned char state, const unsigned char type)
{
    return AddGC_Virt( new gc::ChangeInventorySetting(pt, category, state, type) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeAllInventorySettings(const MapPoint pt, const unsigned char category, const unsigned char state)
{
    return AddGC_Virt( new gc::ChangeAllInventorySettings(pt, category, state) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ChangeReserve(const MapPoint pt, const unsigned char rank, const unsigned char count)
{
    return AddGC_Virt( new gc::ChangeReserve(pt, rank, count) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::CheatArmageddon()
{
    return AddGC_Virt( new gc::CheatArmageddon() );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::Surrender()
{
    return AddGC_Virt( new gc::Surrender() );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::DestroyAll()
{
    return AddGC_Virt( new gc::DestroyAll() );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::ToggleShipYardMode(const MapPoint pt)
{
    return AddGC_Virt( new gc::ToggleShipYardMode(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::StartExpedition(const MapPoint pt)
{
    return AddGC_Virt( new gc::StartExpedition(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::FoundColony(unsigned int shipID)
{
    return AddGC_Virt( new ExpeditionCommand(gc::ExpeditionCommand::FOUNDCOLONY, shipID) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::TravelToNextSpot(Direction direction, unsigned int shipID)
{
    gc::ExpeditionCommand::Action action;
    switch (direction)
    {
    case NORTH:
        action = gc::ExpeditionCommand::Action::NORTH;
        break;
    case NORTHEAST:
        action = gc::ExpeditionCommand::Action::NORTHEAST;
        break;
    case SOUTHEAST:
        action = gc::ExpeditionCommand::Action::SOUTHEAST;
        break;
    case SOUTH:
        action = gc::ExpeditionCommand::Action::SOUTH;
        break;
    case SOUTHWEST:
        action = gc::ExpeditionCommand::Action::SOUTHWEST;
        break;
    case NORTHWEST:
        action = gc::ExpeditionCommand::Action::NORTHWEST;
        break;
    default:
        throw std::invalid_argument("Direction");
    }
    return AddGC_Virt( new gc::ExpeditionCommand(action, shipID) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::CancelExpedition(unsigned int shipID)
{
    return AddGC_Virt( new ExpeditionCommand(gc::ExpeditionCommand::CANCELEXPEDITION, shipID) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::StartExplorationExpedition(const MapPoint pt)
{
    return AddGC_Virt( new gc::StartExplorationExpedition(pt) );
}

template<class T_Handler>
bool GameCommandFactory<T_Handler>::TradeOverLand(const MapPoint pt, const bool ware_figure, const GoodType gt, const Job job, const unsigned count)
{
    return AddGC_Virt( new gc::TradeOverLand(pt, ware_figure,gt, job, count) );
}

//////////////////////////////////////////////////////////////////////////
/// Declare all Factories/Derived classes here to create the code for them

template<>
class GameCommandFactory<GameClient>;

template<>
class GameCommandFactory<AIInterface>;