//
// Created by Admin on 05.04.2021.
//

TEST_CASE( "rogue state check" ) {
    Rogue* a = new Rogue("A");

    REQUIRE( a->getStateP()->getHitPoints() == (int)HP::ROGUE );
    REQUIRE( a->getStateP()->getDamage() == (int)DMG::ROGUE );
    REQUIRE( a->getStateP()->getMagicHitPoints() == (int)MHP::ROGUE );
    REQUIRE( a->getMultiState() == nullptr );
    REQUIRE( a->form == "rogue" );

    delete(a);
}

