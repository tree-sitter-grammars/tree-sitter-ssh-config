import XCTest
import SwiftTreeSitter
import TreeSitterSSHConfig

final class TreeSitterSSHConfigTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ssh_config())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading OpenSSH config grammar")
    }
}
