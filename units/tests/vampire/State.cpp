//
// Created by Admin on 05.04.2021.
//

TEST_CASE( "Vampire state check" ) {
    Vampire* a = new Vampire("A");

    REQUIRE( a->getStateP()->getHitPoints() == (int)HP::VAMPIRE);
    REQUIRE( a->getStateP()->getDamage() == (int)DMG::VAMPIRE );
    REQUIRE( a->getStateP()->getMagicHitPoints() == (int)MHP::VAMPIRE );
    REQUIRE( a->getMultiState() == nullptr );
    REQUIRE( a->form == "Vampire" );

    delete(a);
}
