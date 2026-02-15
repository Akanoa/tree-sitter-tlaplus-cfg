# tree-sitter-tlaplus-cfg

A [tree-sitter](https://tree-sitter.github.io/) grammar for TLC configuration files (`.cfg`).

TLC is the model checker for the [TLA+](https://lamport.azurewebsites.net/tla/tla.html) formal specification language. It uses `.cfg` files to configure model-checking runs — specifying the initial state, the next-state relation, invariants, constants, and other directives.

## Supported syntax

### Directives

| Directive | Keyword(s) |
|---|---|
| Specification | `SPECIFICATION` |
| Init / Next | `INIT`, `NEXT` |
| Constants | `CONSTANT`, `CONSTANTS` |
| Invariants | `INVARIANT`, `INVARIANTS` |
| Properties | `PROPERTY`, `PROPERTIES` |
| Constraints | `CONSTRAINT`, `CONSTRAINTS` |
| Action constraints | `ACTION_CONSTRAINT`, `ACTION_CONSTRAINTS` |
| Deadlock check | `CHECK_DEADLOCK` |
| Symmetry | `SYMMETRY` |
| View | `VIEW` |
| Alias | `ALIAS` |
| Postcondition | `POSTCONDITION` |
| Type constraint | `TYPE`, `TYPE_CONSTRAINT` |

### Constant definitions

- **Assignment**: `MyConst = value`
- **Substitution (model value)**: `MyConst <- ModelValue`

### Literals

- Identifiers, numbers, booleans (`TRUE` / `FALSE`), strings (`"..."`)
- Set literals: `{1, 2, 3}`

### Comments

Line comments starting with `\\*`.

## Usage

```sh
npm install
npx tree-sitter generate
npx tree-sitter test
```

## Example

```
SPECIFICATION Spec
INIT Init
NEXT Next

CONSTANT
  N = 3
  Procs = {p1, p2, p3}
  DefaultValue <- DefaultModelValue

INVARIANT TypeOK Consistency
PROPERTY Liveness

CHECK_DEADLOCK FALSE
```

## License

MIT
