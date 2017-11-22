
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Defines.hpp"

#include <string>

namespace Dynamic_Static {
namespace Tests {

    static const char LoremIpsumLiteral[] {
R"(
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam ultrices, neque
eu tincidunt placerat, nisl odio placerat massa, et tristique urna nisl vel dui.
Suspendisse facilisis augue sit amet felis laoreet, vel congue sapien facilisis.
Cras lectus lectus, tristique a est id, venenatis auctor mauris. Duis sit amet
quam ut libero sollicitudin malesuada a vel nibh. Phasellus dapibus fermentum ex
vitae mollis. Sed porttitor pellentesque ex id pulvinar. Nulla gravida magna ex,
venenatis lobortis risus placerat lobortis. Maecenas et venenatis sapien,
aliquam pulvinar nunc. Proin in pretium eros. Nam et nisi tincidunt,
sollicitudin ligula id, commodo nisi. Proin porttitor erat sed hendrerit
scelerisque. Aenean et dolor lectus. Quisque rutrum, quam nec finibus auctor,
nunc libero accumsan sem, non pretium lorem justo a odio. Donec consectetur
ligula sit amet mi elementum iaculis. Quisque a aliquam magna. Morbi ullamcorper
in nisi sit amet eleifend.

Cras vehicula ultricies est, sit amet feugiat magna pulvinar a. Phasellus
sagittis lorem neque, ac efficitur dolor accumsan ut. Curabitur mollis, neque
eget vulputate maximus, felis mauris ultrices neque, non lobortis purus ligula
sit amet sem. Vestibulum justo diam, ornare mattis augue ac, congue consectetur
lacus. Pellentesque commodo tellus molestie, congue neque et, vulputate quam.
Proin ultricies aliquam iaculis. Pellentesque habitant morbi tristique senectus
et netus et malesuada fames ac turpis egestas. Nullam eu arcu viverra ex
porttitor cursus imperdiet eu elit. Nullam in urna pulvinar, scelerisque massa
ultricies, venenatis augue. Nam rutrum quam ut nisi bibendum pharetra.
Pellentesque feugiat sapien a pretium molestie. Proin aliquam turpis a sem
sagittis vestibulum vel eget odio. Pellentesque habitant morbi tristique
senectus et netus et malesuada fames ac turpis egestas.

Nunc rutrum id sapien a pellentesque. Ut finibus consequat pellentesque. In
libero velit, pulvinar et lectus euismod, maximus iaculis libero. Etiam porta
ipsum a lorem consequat, ut lacinia felis ultricies. Suspendisse fermentum purus
nec est vestibulum porttitor. Donec dui dolor, efficitur in ullamcorper a,
suscipit at libero. Ut eu efficitur urna. Vivamus faucibus lectus ut semper
pretium. Mauris suscipit neque sed risus euismod blandit. Aenean a rutrum enim,
ac dapibus dui. Aenean euismod consectetur feugiat. Donec vel suscipit nisi.
Aliquam ut faucibus augue, vitae tincidunt neque.

Duis molestie eu dui et condimentum. Etiam ornare dui nisl, id viverra est
mollis ut. Orci varius natoque penatibus et magnis dis parturient montes,
nascetur ridiculus mus. Nulla facilisi. Donec ultricies ante facilisis, lacinia
leo ac, convallis risus. Aenean eget elit nisl. Sed lorem dolor, suscipit vel
sagittis ut, fringilla sit amet est. Vestibulum aliquam malesuada ante, ut porta
ligula ornare ac. Mauris sit amet nisl scelerisque, condimentum nibh ac, iaculis
elit.

Mauris tellus libero, vulputate non ultricies eleifend, fermentum sed nunc.
Mauris eu porttitor ex. Ut id consectetur odio. In hac habitasse platea
dictumst. Nunc sapien lorem, congue vitae sapien id, interdum accumsan dolor.
Donec iaculis fermentum dictum. Nam mauris dui, auctor ac dolor in, varius
condimentum velit. Aliquam erat volutpat. Proin quis lacus cursus quam accumsan
pulvinar. Pellentesque ac aliquet sem, eget iaculis dui. Morbi porta nunc sit
amet consectetur bibendum. Donec id laoreet massa. Donec auctor cursus ex, id
efficitur elit finibus ut.
)"
};

    #if DYNAMIC_STATIC_WINDOWS
    static constexpr char LoremIpsumFilePath[] { "LoremIpsum.txt" };
    #else
    #endif

} // namespace Tests
} // namespace Dynamic_Static