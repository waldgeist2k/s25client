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

#ifndef VertexUtility_h__
#define VertexUtility_h__

#include <vector>
#include "mapGenerator/Vec2.h"

class VertexUtility
{
    public:
    
    /**
     * Computes the position of the vertex with the specified index on the map.
     * @param index vertex index
     * @param width width of the map
     * @param height height of the map
     * @return the position of the vertex on the map
     */
    static Vec2 GetPosition(const int index, const int width, const int height);
    
    /**
     * Computes the index of a vertex on the map. If the position is outside of the map's boundary, the
     * coordinates are continuing on the other side of the map again (fluent boundaries).
     * @param x x-coordinate of the position of the vertex on the map
     * @param y y-coordinate of the position of the vertex on the map
     * @param width map width
     * @param height map height
     * @return the index of the vertex
     */
    static int GetIndexOf(const int x, const int y, const int width, const int height);

    /**
     * Computes indices of neighboring vertices within the specified radius around the position.
     * @param pos x x-coordinate of the center position to collect neighboring vertices around
     * @param pos y y-coordinate of the center position to collect neighboring vertices around
     * @param width map width
     * @param height map height
     * @param radius radius for collecting neighbor vertices
     * @return vector of indices for neighbor vertices
     */
    static std::vector<int> GetNeighbors(const int x,
                                         const int y,
                                         const int width,
                                         const int height,
                                         const int radius);

    /**
     * Computes the distance between two vertices.
     * @param x1 x-coordinate of the first vertex
     * @param y1 y-coordinate of the first vertex
     * @param x2 x-coordinate of the second vertex
     * @param y2 y-coordinate of the second vertex
     * @param width map width
     * @param height map height
     * @return the distance between the two vertices
     */
    static double Distance(const int x1,
                           const int y1,
                           const int x2,
                           const int y2,
                           const int width,
                           const int height);
};

#endif // VertexUtility_h__
