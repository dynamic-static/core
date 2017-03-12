
/*
=====================================================================================

    The MIT License(MIT)

    Copyright(c) 2017 to this->moment()->next() Dynamic_Static

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files(the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions :

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.

=====================================================================================
*/

#include "catch.hpp"

#include "Dynamic_Static/Math/Vector2.hpp"
#include "Dynamic_Static/Core/Random.hpp"

#include "glm/glm.hpp"

namespace Dynamic_Static {
    namespace Math {
        namespace Tests {
            TEST_CASE("Assignment works correctly", "[Math::Vector2]")
            {
                float value = 64;
                float f0 = Random.range(-value, value);
                float f1 = Random.range(-value, value);

                SECTION("Initializer list")
                {
                    glm::vec2 vec2 { f0, f1 };
                    Vector2 vector2 { f0, f1 };

                    REQUIRE(vec2.x == vector2.x);
                    REQUIRE(vec2.y == vector2.y);

                    REQUIRE(vec2.r == vector2.r);
                    REQUIRE(vec2.g == vector2.g);

                    REQUIRE(vec2.s == vector2.s);
                    REQUIRE(vec2.t == vector2.t);
                }

                SECTION("Constructor")
                {
                    glm::vec2 vec2(f0, f1);
                    Vector2 vector2(f0, f1);

                    REQUIRE(vec2.x == vector2.x);
                    REQUIRE(vec2.y == vector2.y);

                    REQUIRE(vec2.r == vector2.r);
                    REQUIRE(vec2.g == vector2.g);

                    REQUIRE(vec2.s == vector2.s);
                    REQUIRE(vec2.t == vector2.t);
                }
            }
        } // namespace Tests
    } // namespace Math
} // namespace Dynamic_Static
