//
// Created by Admin on 06.04.2021.
//

TEST_CASE( "rogue protected from counter attack" ) {
    Rogue* a = new Rogue("A");
    Soldier* b = new Soldier("B");

    a->attack(b);

    REQUIRE( a->getStateP()->getHitPoints() == (int)HP::ROGUE );
    REQUIRE( a->getStateP()->getDamage() == (int)DMG::ROGUE );
    REQUIRE( a->getStateP()->getMagicHitPoints() == (int)MHP::ROGUE );
    REQUIRE( a->getMultiState() == nullptr );
    REQUIRE( a->form == "rogue" );

    delete(a);
    delete(b);
}
