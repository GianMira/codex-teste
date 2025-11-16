# Repository Guidelines

This document describes how to work effectively in this repository.

## Project Structure & Module Organization

- Application code lives under `src/`.
- Automated tests live under `tests/` (or alongside code as `*.test.*` files).
- Build artifacts and temporary outputs should go to `dist/` or `build/` and must not be committed.

Keep modules small and cohesive. Prefer feature-oriented folders (e.g., `src/auth/`, `src/api/`) over large, generic utility files.

## Build, Test, and Development Commands

- `npm install` – install project dependencies.
- `npm run dev` – run the development server or watch mode.
- `npm test` – run the test suite.
- `npm run build` – produce a production build into `dist/` or `build/`.

If the project uses a different toolchain (e.g., `pnpm`, `yarn`, `make`), mirror the existing scripts and patterns when adding new commands.

## Coding Style & Naming Conventions

- Follow the established style of nearby code.
- Use 2-space or 4-space indentation consistently with the existing files.
- Prefer descriptive names: `getUserProfile` over `getData`.
- Use `camelCase` for variables/functions, `PascalCase` for classes/components, and `SCREAMING_SNAKE_CASE` for constants.
- Run any available formatters/linters (e.g., `npm run lint`, `npm run format`) before opening a pull request.

## Testing Guidelines

- Mirror the existing test framework (e.g., Jest, Vitest, Mocha).
- Name test files after the unit under test (for example, `userService.test.ts`).
- Add or update tests whenever you change behavior or fix a bug.
- Ensure `npm test` passes before pushing.

## Commit & Pull Request Guidelines

- Write clear, imperative commit messages (e.g., `Add user login validation`).
- Group related changes into a single commit or small, logical commits.
- For pull requests, include:
  - A concise summary of the change.
  - Any relevant issue IDs (e.g., `Closes #123`).
  - Notes on breaking changes or migration steps.

