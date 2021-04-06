//
// Created by Admin on 05.04.2021.
//

TEST_CASE( "Werewolf state check" ) {
    Werewolf* a = new Werewolf("A");

    REQUIRE( a->getStateP()->getHitPoints() == (int)HP::WEREWOLF_HUMAN );
    REQUIRE( a->getStateP()->getDamage() == (int)DMG::WEREWOLF_HUMAN );
    REQUIRE( a->getStateP()->getMagicHitPoints() == (int)MHP::WEREWOLF_HUMAN );
    REQUIRE( a->getMultiState() != nullptr );
    REQUIRE( a->form == "Werewolf" );

    delete(a);
}
