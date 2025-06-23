// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterSSHConfig",
    products: [
        .library(name: "TreeSitterSSHConfig", targets: ["TreeSitterSSHConfig"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSSHConfig",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSSHConfigTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSSHConfig",
            ],
            path: "bindings/swift/TreeSitterSSHConfigTests"
        )
    ],
    cLanguageStandard: .c11
)
