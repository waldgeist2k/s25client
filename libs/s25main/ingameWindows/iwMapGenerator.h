// Copyright (C) 2005 - 2021 Settlers Freaks (sf-team at siedler25.org)
//
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "IngameWindow.h"
#include "mapGenerator/MapSettings.h"

/// Window to configure parameters used for random map generation
class iwMapGenerator : public IngameWindow
{
public:
    enum Controls
    {
        CTRL_BTN_BACK,
        CTRL_BTN_APPLY,
        CTRL_TXT_LANDSCAPE,
        CTRL_TXT_GOAL,
        CTRL_TXT_IRON,
        CTRL_TXT_COAL,
        CTRL_TXT_GRANITE,
        CTRL_TXT_RIVERS,
        CTRL_TXT_MOUNTAIN_DIST,
        CTRL_TXT_TREES,
        CTRL_TXT_STONE_PILES,
        CTRL_TXT_ISLANDS,
        CTRL_PLAYER_NUMBER,
        CTRL_MAP_STYLE,
        CTRL_MAP_SIZE,
        CTRL_MAP_TYPE,
        CTRL_RATIO_GOLD,
        CTRL_RATIO_IRON,
        CTRL_RATIO_COAL,
        CTRL_RATIO_GRANITE,
        CTRL_RIVERS,
        CTRL_MOUNTAIN_DIST,
        CTRL_TREES,
        CTRL_STONE_PILES,
        CTRL_ISLANDS
    };

    /**
     * Creates a new ingame window to configure the random map generator.
     * @param settings reference to the settings to be manipulated
     */
    iwMapGenerator(rttr::mapGenerator::MapSettings& settings);

    void Msg_ButtonClick(unsigned ctrl_id) override;

private:
    rttr::mapGenerator::MapSettings& mapSettings;

    /// Reset the UI to the values of @ref mapSettings
    void Reset();
    /// Updates @ref mapSettings with the values currently configured in the UI.
    void Apply();
};
