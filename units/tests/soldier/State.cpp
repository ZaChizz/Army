//
// Created by Admin on 05.04.2021.
//

TEST_CASE( "soldier state check" ) {
    Soldier* a = new Soldier("A");

    REQUIRE( a->getStateP()->getHitPoints() == (int)HP::SOLDIER );
    REQUIRE( a->getStateP()->getDamage() == (int)DMG::SOLDIER );
    REQUIRE( a->getStateP()->getMagicHitPoints() == (int)MHP::SOLDIER );
    REQUIRE( a->getMultiState() == nullptr );
    REQUIRE( a->form == "soldier" );

    delete(a);
}
