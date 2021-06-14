//
// Created by Admin on 06.04.2021.
//

TEST_CASE( "Werewolf transform check" ) {
    Werewolf* a = new Werewolf("A");
    a->getMultiState()->transform(a);

    REQUIRE( a->getStateP()->getHitPoints() == (int)HP::WEREWOLF_WOLF);
    REQUIRE( a->getStateP()->getDamage() == (int)DMG::WEREWOLF_WOLF );
    REQUIRE( a->getStateP()->getMagicHitPoints() == (int)MHP::WEREWOLF_WOLF );
    REQUIRE( a->getMultiState() != nullptr );
    REQUIRE( a->form == "Werewolf" );

    delete(a);
}
