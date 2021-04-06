//
// Created by Admin on 05.04.2021.
//

TEST_CASE( "Berserker state check" ) {
    Berserker* a = new Berserker("A");

    REQUIRE( a->getStateP()->getHitPoints() == (int)HP::BERSERKER );
    REQUIRE( a->getStateP()->getDamage() == (int)DMG::BERSERKER );
    REQUIRE( a->getStateP()->getMagicHitPoints() == (int)MHP::BERSERKER );
    REQUIRE( a->getMultiState() == nullptr );
    REQUIRE( a->form == "Berserker" );

    delete(a);
}
